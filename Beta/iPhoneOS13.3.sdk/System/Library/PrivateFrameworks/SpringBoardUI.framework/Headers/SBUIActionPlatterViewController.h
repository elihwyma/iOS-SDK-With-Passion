/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, UIStackView, UIView;

@protocol SBUIActionPlatterViewControllerDelegate;

@interface SBUIActionPlatterViewController : UIViewController

{
    struct {
        unsigned int actionPlatterViewControllerShouldRespondToTouches:1;
    } _delegateRespondsTo;
    UIStackView *_stackView;
    UIView *_keylinesContainerView;
    UISelectionFeedbackGenerator *_feedbackRetargetBehavior;
    _Bool _reversesActions;
    NSArray *_actions;
    unsigned long long _systemInteractionStartIndex;
    UILongPressGestureRecognizer *_gestureRecognizer;
    long long _imagePosition;
    id <SBUIActionPlatterViewControllerDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSArray *actions;
@property (nonatomic) unsigned long long systemInteractionStartIndex;
@property (weak, nonatomic, readonly) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic) _Bool reversesActions;
@property (nonatomic) long long imagePosition;
@property (weak, nonatomic) id <SBUIActionPlatterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithActions:(id)arg1 gestureRecognizer:(id)arg2;
- (void)_updateKeylineViews;
- (void)_handleLongPressGestureRecognizer:(id)arg1;

@end
