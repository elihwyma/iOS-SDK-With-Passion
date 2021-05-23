/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDraggingImageSlotOwner.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableSet, NSPointerArray, NSProgress, NSString, PBItemCollection, UIDragEvent, UIView, UIWindow, UIWindowScene, _DUIPotentialDrop, _UIApplicationModalProgressController, _UIDataTransferMonitor, _UIDragSetDownAnimation, _UIDropSessionImpl, _UIInternalDraggingSessionSource;

@protocol _UIDruidDestinationConnection;

__attribute__((visibility("hidden")))
@interface _UIInternalDraggingSessionDestination : _UIDraggingImageSlotOwner <Swift>

{
    unsigned int _sessionIdentifier;
    unsigned int _touchRoutingPolicyContextID;
    _UIInternalDraggingSessionSource *_sessionSource;
    _Bool _connectedToDruid;
    _Bool _isPolicyDriven;
    _Bool _dragInteractionDidEnd;
    NSMutableSet *_enteredDestinations;
    UIView *_dropDestinationView;
    UIWindowScene *_dropDestinationWindowScene;
    CDUnknownBlockType _dropPerformBlock;
    CDUnknownBlockType _dropCompletionBlock;
    CDUnknownBlockType _postDropAnimationCompletionBlock;
    _UIDragSetDownAnimation *_setDownAnimation;
    PBItemCollection *_droppedItemCollection;
    _UIDataTransferMonitor *_dataTransferMonitor;
    _UIApplicationModalProgressController *_modalProgressAlertController;
    _Bool _dropWasPerformed;
    _DUIPotentialDrop *_lastPotentialDrop;
    NSPointerArray *_dragEvents;
    _Bool _isAccessibilitySession;
    _UIDropSessionImpl *_dropSession;
    UIWindow *_centroidWindow;
    NSArray *_dropItemProviders;
    long long _sourceDataOwner;
    NSArray *_internalItems;
    unsigned long long _outsideAppSourceOperationMask;
    unsigned long long _progressIndicatorStyle;
    id <_UIDruidDestinationConnection> _druidConnection;
    NSProgress *_progress;
    struct CGPoint _centroid;
}

@property (retain, nonatomic) id <_UIDruidDestinationConnection> druidConnection;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic, readonly) NSArray *dragEvents;
@property (nonatomic, readonly) unsigned int sessionIdentifier;
@property (nonatomic, readonly) UIDragEvent *activeDragEvent;
@property (nonatomic, readonly) _UIInternalDraggingSessionSource *inAppSessionSource;
@property (nonatomic, readonly) _UIDropSessionImpl *dropSession;
@property (nonatomic, readonly) struct CGPoint centroid;
@property (nonatomic, readonly) UIWindow *centroidWindow;
@property (nonatomic, readonly) _Bool shouldDragEventBeSentToGestureRecognizers;
@property (nonatomic, readonly) _Bool didRequestDropToBePerformed;
@property (nonatomic, readonly) NSArray *preDropItemProviders;
@property (nonatomic, readonly) NSArray *dropItemProviders;
@property (nonatomic, readonly) long long sourceDataOwner;
@property (copy, nonatomic) NSArray *internalItems;
@property (nonatomic, readonly) unsigned long long outsideAppSourceOperationMask;
@property (nonatomic, readonly) unsigned long long sourceOperationMask;
@property (nonatomic, readonly) _Bool isAccessibilitySession;
@property (nonatomic) unsigned long long progressIndicatorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long draggingSourceOperationMask;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)connect;
- (void)requestDropOnView:(id)arg1 withOperation:(unsigned long long)arg2 perform:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)actualDragOperationForProposedDragOperation:(unsigned long long)arg1 destinationDataOwner:(long long)arg2 forbidden:(_Bool *)arg3;
- (void)takePotentialDrop:(id)arg1;
- (void)enteredDestination:(id)arg1;
- (struct CGPoint)draggingLocationInCoordinateSpace:(id)arg1;
- (void)requestVisibleItems:(CDUnknownBlockType)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)sawDragEndEvent;
- (void)itemsBecameDirty:(id)arg1;
- (void)dragDidExitApp;
- (void)updateCentroidFromDragEvent;
- (void)addDragEvent:(id)arg1;
- (void)takeVisibleDroppedItems:(id)arg1;
- (void)setUpDropAnimation:(id)arg1;
- (void)handOffDroppedItems:(id)arg1;
- (void)_sessionDidEndNormally:(_Bool)arg1;
- (void)_removeFromDragManager;
- (void)dataTransferMonitorBeganTransfers:(id)arg1;
- (void)dataTransferMonitorFinishedTransfers:(id)arg1;
- (id)initWithDragManager:(id)arg1 dragEvent:(id)arg2;
- (_Bool)canBeDrivenByDragEvent:(id)arg1;
- (void)dragInteractionEnding;

@end
