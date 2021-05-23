/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UISwipeActionController, _UIStatesFeedbackGenerator, _UISwipeActionPanGestureRecognizer, _UISwipeDismissalGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UISwipeHandler : NSObject <Swift>

{
    struct {
        unsigned int didProcessBegan:1;
    } _flags;
    _UISwipeDismissalGestureRecognizer *_dismissalGestureRecognizer;
    _UISwipeActionPanGestureRecognizer *_swipeActionPanRecognizer;
    CDStruct_324b76a9 _currentSwipeConfig;
    unsigned long long _currentSwipeState;
    _Bool _resetSwipeWhileInitiating;
    double _initialTranslation;
    double _confirmationTranslationAdjustment;
    _Bool _active;
    _UIStatesFeedbackGenerator *_swipeFeedbackGenerator;
    UISwipeActionController *_swipeController;
}

@property (weak, nonatomic) UISwipeActionController *swipeController;
@property (nonatomic, readonly) CDStruct_324b76a9 currentSwipeConfig;
@property (nonatomic, readonly) unsigned long long currentSwipeState;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isInteracting) _Bool interacting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithSwipeController:(id)arg1;
- (void)initiateSwipeWithDirection:(unsigned long long)arg1 configuration:(id)arg2 location:(struct CGPoint)arg3 userInitiated:(_Bool)arg4;
- (void)resetSwipe;
- (_Bool)gestureRecognizerShouldDismissForTouchDown:(id)arg1;
- (_Bool)gestureRecognizerShouldDismissForTouchUp:(id)arg1;
- (void)_setUp;
- (void)_swipeRecognizerDidRecognize:(id)arg1;
- (void)_dismissalRecognizerDidRecognize:(id)arg1;
- (unsigned long long)_directionForGestureRecognizer:(id)arg1;
- (void)_swipeRecognizerBegan:(id)arg1;
- (void)_swipeRecognizerChanged:(id)arg1;
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (void)_moveSwipedItemToOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffness:(double)arg3 isTracking:(_Bool)arg4;
- (CDStruct_9b6dff2a)_currentSwipeInfoWithTargetOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffness:(double)arg3;

@end
