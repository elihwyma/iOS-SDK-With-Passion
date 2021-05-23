/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMapTable, NSMutableSet, NSString, UIDropInteractionContextImpl, UIPasteConfiguration, UIView;

@protocol UIDropInteractionDelegate, UIDropInteractionEffect;

@interface UIDropInteraction : NSObject <Swift>

{
    NSMutableSet *_activeDragGestureRecognizers;
    NSMapTable *_enteredDropSessionByDraggingSession;
    unsigned long long _potentialDragOperation;
    _Bool _allowsSimultaneousDropSessions;
    _Bool _wantsDefaultVisualBehavior;
    id <UIDropInteractionDelegate> _delegate;
    UIView *_view;
    UIDropInteractionContextImpl *_context;
    UIPasteConfiguration *_pasteConfiguration;
    id <UIDropInteractionEffect> _interactionEffect;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UIDropInteractionContextImpl *context;
@property (copy, nonatomic, readonly, getter=_pasteConfiguration) UIPasteConfiguration *pasteConfiguration;
@property (retain, nonatomic) id <UIDropInteractionEffect> interactionEffect;
@property (nonatomic, getter=_wantsDefaultVisualBehavior, setter=_setWantsDefaultVisualBehavior:) _Bool wantsDefaultVisualBehavior;
@property (weak, nonatomic, readonly) id <UIDropInteractionDelegate> delegate;
@property (nonatomic) _Bool allowsSimultaneousDropSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isActive;
- (id)initWithDelegate:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_dragDestinationGestureStateChanged:(id)arg1;
- (_Bool)_allowsSimultaneousDragWithEvent:(id)arg1;
- (_Bool)_canHandleDragEvent:(id)arg1;
- (void)_dropSessionEntered:(id)arg1 withSessionDestination:(id)arg2;
- (unsigned long long)_validateDragOperation:(unsigned long long)arg1 forSelector:(SEL)arg2 delegate:(id)arg3 dropSession:(id)arg4 onSession:(id)arg5 forbidden:(_Bool *)arg6;
- (unsigned long long)_setLastDragOperation:(unsigned long long)arg1 forbidden:(_Bool)arg2 precise:(_Bool)arg3 prefersFullSizePreview:(_Bool)arg4 preferredBadgeStyle:(long long)arg5 onSession:(id)arg6;
- (void)_prepareItemsInSessionForDrop:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveDragEvent:(id)arg2;
- (id)_dynamicGestureRecognizersForEvent:(id)arg1;
- (id)_setDownAnimation:(id)arg1 windowSceneForSetDownOfDragItem:(id)arg2;
- (id)_setDownAnimation:(id)arg1 prepareForSetDownOfDragItem:(id)arg2 visibleDroppedItem:(id)arg3;
- (void)_setDownAnimation:(id)arg1 willAnimateSetDownOfDragItem:(id)arg2 withAnimator:(id)arg3;
- (_Bool)_setDownAnimation:(id)arg1 shouldDelaySetDownOfDragItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_initWithPasteConfiguration:(id)arg1;
- (void)_sendSessionDidEnd:(id)arg1;

@end
