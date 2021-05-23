/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <UIKit/UIViewController.h>

@class BFFPaneHeaderView, NSString, PSGCircleSegmentedControl, UITapGestureRecognizer;

@protocol BSInvalidatable, PSGHomeButtonCustomizeControllerDelegate;

@interface PSGHomeButtonCustomizeController : UIViewController

{
    BFFPaneHeaderView *_headerView;
    PSGCircleSegmentedControl *_segmentedControl;
    UITapGestureRecognizer *_menuButtonRecognizer;
    id <BSInvalidatable> _eventConsumerToken;
    _Bool _visible;
    _Bool _forceFeelValueChanged;
    _Bool _reachabilityEnabled;
    _Bool _usesDoneButton;
    id <PSGHomeButtonCustomizeControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <PSGHomeButtonCustomizeControllerDelegate> delegate;
@property (nonatomic) _Bool usesDoneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)consumeAnyPressEventForButtonKind:(long long)arg1;
- (void)segmentedControl:(id)arg1 didSelectSegmentAtIndex:(unsigned long long)arg2;
- (void)setListeningForHomeButtonPresses:(_Bool)arg1;
- (void)barButtonTapped;
- (void)_updateDetailText;
- (void)_makeConstraints;
- (unsigned long long)getForceFeel;
- (void)setForceFeel:(unsigned long long)arg1;

@end
