/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDraggingImageSlotOwner.h>

@class NSArray, NSString, NSTimer, PBItemCollection, UIDragEvent, UIDraggingBeginningSessionConfiguration, UIDraggingSystemTouchRoutingPolicy, UIView, UIWindow, _UIDragSetDownAnimation, _UIDruidSourceConnection;

@protocol _UIDraggingSessionDelegate;

__attribute__((visibility("hidden")))
@interface _UIInternalDraggingSessionSource : _UIDraggingImageSlotOwner

{
    struct CGPoint _lastNotifiedCentroid;
    _Bool _didHandOffDragImage;
    PBItemCollection *_pbItemCollection;
    UIDraggingSystemTouchRoutingPolicy *_touchRoutingPolicy;
    _UIDragSetDownAnimation *_setDownAnimation;
    long long _stateAfterSetDown;
    _Bool _sentWillEnd;
    _Bool _hostIsActive;
    _Bool _originatedInHostedWindow;
    NSTimer *_waitingToSendDidExitAppTimer;
    UIDraggingBeginningSessionConfiguration *_configuration;
    unsigned int _sessionIdentifier;
    id <_UIDraggingSessionDelegate> _delegate;
    UIDragEvent *_dragEvent;
    UIView *_sourceView;
    long long _state;
    unsigned long long _resultOperation;
    NSArray *_internalItems;
    long long _dataOwner;
    UIWindow *_centroidWindow;
    unsigned long long _withinAppSourceOperationMask;
    unsigned long long _outsideAppSourceOperationMask;
    _UIDruidSourceConnection *_druidConnection;
    struct CGPoint _centroid;
}

@property (retain, nonatomic) _UIDruidSourceConnection *druidConnection;
@property (weak, nonatomic) id <_UIDraggingSessionDelegate> delegate;
@property (weak, nonatomic) UIDragEvent *dragEvent;
@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long resultOperation;
@property (copy, nonatomic) NSArray *internalItems;
@property (nonatomic) long long dataOwner;
@property (nonatomic, readonly) struct CGPoint centroid;
@property (nonatomic, readonly) UIWindow *centroidWindow;
@property (nonatomic, readonly) unsigned int sessionIdentifier;
@property (nonatomic, readonly) unsigned long long withinAppSourceOperationMask;
@property (nonatomic, readonly) unsigned long long outsideAppSourceOperationMask;
@property (nonatomic, readonly) _Bool prefersFullSizePreview;
@property (nonatomic, readonly) _Bool shouldCancelOnAppDeactivation;
@property (nonatomic, readonly) _Bool canAddItems;
@property (nonatomic, readonly) _Bool isActive;
@property (nonatomic, readonly) _Bool didHandOffDragImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long draggingSourceOperationMask;

- (void)addPublicItems:(id)arg1;
- (void)cancelDrag;
- (struct CGPoint)draggingLocationInCoordinateSpace:(id)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_hostWillBecomeActive;
- (void)_hostDidDeactivate;
- (void)_sendWillBegin;
- (void)_getOperationMaskFromDelegate;
- (void)_sendWillEndWithOperation:(unsigned long long)arg1;
- (void)_sendDidEndWithOperation:(unsigned long long)arg1;
- (void)itemsBecameDirty:(id)arg1;
- (void)_didBeginDrag;
- (void)_sendHandedOffDragImage;
- (void)_sendHandedOffDragImageForItem:(id)arg1;
- (void)_handOffCancelledItems:(id)arg1;
- (void)_sendDataTransferFinished;
- (void)_sendDidMove;
- (void)dragDidExitApp;
- (void)_sendWillAddItems:(id)arg1;
- (id)touchRoutingPolicy;
- (_Bool)touchRoutingPolicyContainsContextIDToAlwaysSend:(unsigned int)arg1;
- (id)initWithDragManager:(id)arg1 configuration:(id)arg2;
- (_Bool)preventsSimultaneousDragFromView:(id)arg1;
- (_Bool)dynamicallyUpdatesPrefersFullSizePreviews;
- (void)beginDrag:(CDUnknownBlockType)arg1;
- (void)updateCentroidFromDragEvent;
- (void)dragIsInsideApp;

@end
