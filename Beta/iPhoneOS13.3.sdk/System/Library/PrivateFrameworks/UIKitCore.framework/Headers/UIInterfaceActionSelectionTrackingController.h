/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableSet, NSPointerArray, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UIScrollView, UISelectionFeedbackGenerator, UIView, _UIInterfaceActionSelectByPressGestureRecognizer, _UIInterfaceActionSelectionDelayGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionSelectionTrackingController : NSObject <Swift>

{
    _Bool _scrubbingEnabled;
    _Bool _selectByPressGestureEnabled;
    _Bool _selectionFeedbackEnabled;
    UIView *_trackableContainerView;
    UIScrollView *_actionsScrollView;
    NSArray *_representationViews;
    UILongPressGestureRecognizer *_selectionGestureRecognizer;
    _UIInterfaceActionSelectionDelayGestureRecognizer *_selectionDelayGestureRecognizer;
    UIGestureRecognizer *_systemProvidedGestureRecognizer;
    NSMutableSet *_viewsRequiringSelectionGestureDisabling;
    _UIInterfaceActionSelectByPressGestureRecognizer *_selectByPressGestureRecognizer;
    UISelectionFeedbackGenerator *_selectionRetargetFeedbackGenerator;
    NSPointerArray *_weakCooperatingSelectionTrackingControllers;
    id _scrollViewWillBeginDraggingNotificationToken;
    id _scrollViewDidEndDraggingNotificationToken;
    id _scrollViewDidEndDeceleratingNotificationToken;
    struct CGPoint _actionSelectionInitialLocationInContainerView;
}

@property (nonatomic, readonly) struct CGPoint actionSelectionInitialLocationInContainerView;
@property (nonatomic, readonly) UILongPressGestureRecognizer *selectionGestureRecognizer;
@property (nonatomic, readonly) _UIInterfaceActionSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *systemProvidedGestureRecognizer;
@property (nonatomic, readonly) NSMutableSet *viewsRequiringSelectionGestureDisabling;
@property (retain, nonatomic) _UIInterfaceActionSelectByPressGestureRecognizer *selectByPressGestureRecognizer;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionRetargetFeedbackGenerator;
@property (retain, nonatomic) NSPointerArray *weakCooperatingSelectionTrackingControllers;
@property (retain, nonatomic) id scrollViewWillBeginDraggingNotificationToken;
@property (retain, nonatomic) id scrollViewDidEndDraggingNotificationToken;
@property (retain, nonatomic) id scrollViewDidEndDeceleratingNotificationToken;
@property (weak, nonatomic) UIView *trackableContainerView;
@property (weak, nonatomic) UIScrollView *actionsScrollView;
@property (nonatomic) _Bool scrubbingEnabled;
@property (nonatomic) _Bool selectByPressGestureEnabled;
@property (nonatomic) _Bool selectionFeedbackEnabled;
@property (retain, nonatomic) NSArray *representationViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (void)setCooperatingSelectionTrackingControllers:(id)arg1;
- (id)initWithTrackableContainerView:(id)arg1 actionsScrollView:(id)arg2;
- (id)_interfaceActionOfFocusedRepresentationView;
- (void)_initializeSelectionGestureRecognizer;
- (void)_registerForScrollViewNotifications;
- (void)_unregisterForScrollViewNotifications;
- (id)_allActionViewsIncludingCooperatingActionViews;
- (void)_invokeHandlerForInterfaceAction:(id)arg1;
- (void)_setSystemProvidedGestureRecognizer:(id)arg1;
- (void)_handleActionSelectionGestureRecognizer:(id)arg1;
- (id)_allGestureRecognizers;
- (void)_handleSystemProvidedGestureRecognizer:(id)arg1;
- (_Bool)_isPresentedAndVisible;
- (_Bool)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg1;
- (id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg1;
- (void)_clearSystemProvidedGestureRecognizer;
- (id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg1;
- (void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_noteScrollView:(id)arg1 isUserScrolling:(_Bool)arg2;
- (_Bool)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg1;
- (void)handlePressedFocusedInterfaceAction:(id)arg1;
- (id)focusedInterfaceAction;

@end
