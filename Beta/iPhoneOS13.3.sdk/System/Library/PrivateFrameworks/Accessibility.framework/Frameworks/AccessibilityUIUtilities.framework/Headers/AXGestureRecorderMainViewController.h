/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Preferences/PSViewController.h>

@class AXAssertion, AXGestureRecorderControlsView, AXGestureRecorderStyleProvider, AXGestureRecorderViewController, NSString, UIBarButtonItem, UILabel;

@protocol AXGestureRecorderMainViewControllerDelegate;

@interface AXGestureRecorderMainViewController : PSViewController

{
    _Bool _inReplayMode;
    _Bool _isDisplayLinkInEffect;
    AXGestureRecorderStyleProvider *_styleProvider;
    AXGestureRecorderViewController *_gestureRecorderViewController;
    AXGestureRecorderControlsView *_controlsView;
    UILabel *_instructionsLabel;
    UIBarButtonItem *_saveButton;
    unsigned long long _leftButtonIdentifier;
    unsigned long long _rightButtonIdentifier;
    double _gestureRecordingDidStartTimeInterval;
    id <AXGestureRecorderMainViewControllerDelegate> _delegate;
    AXAssertion *_disableSystemGesturesAssertion;
    id _appDidResignActiveNotificationHandlerToken;
    long long _recorderType;
}

@property (retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider;
@property (retain, nonatomic) AXGestureRecorderViewController *gestureRecorderViewController;
@property (retain, nonatomic) AXGestureRecorderControlsView *controlsView;
@property (retain, nonatomic) UILabel *instructionsLabel;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (nonatomic) unsigned long long leftButtonIdentifier;
@property (nonatomic) unsigned long long rightButtonIdentifier;
@property (nonatomic) double gestureRecordingDidStartTimeInterval;
@property (nonatomic, getter=isInReplayMode) _Bool inReplayMode;
@property (retain, nonatomic) AXAssertion *disableSystemGesturesAssertion;
@property (weak, nonatomic) id appDidResignActiveNotificationHandlerToken;
@property (nonatomic) long long recorderType;
@property (nonatomic) _Bool isDisplayLinkInEffect;
@property (weak, nonatomic) id <AXGestureRecorderMainViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (id)init;
- (void)dealloc;
- (void)_reset;
- (id)initWithType:(long long)arg1;
- (void)_commonInit;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)_releaseOutlets;
- (id)_defaultInstructionalText;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_saveButtonTapped:(id)arg1;
- (void)_setLeftButtonIdentifier:(unsigned long long)arg1 enabled:(_Bool)arg2 rightButtonIdentifier:(unsigned long long)arg3 enabled:(_Bool)arg4 animate:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_hideChromeButtonTapped:(id)arg1;
- (void)_saveWithMessage:(id)arg1;
- (void)_saveReplayableGesture;
- (void)_hide;
- (void)_unhideChrome;
- (void)_hideChrome;
- (void)_getButtonPropertiesForIdentifier:(unsigned long long)arg1 enabled:(_Bool)arg2 color:(int *)arg3 title:(id *)arg4;
- (void)_manageDisplayLinkManager:(_Bool)arg1;
- (_Bool)_isForRealTimeGesture;
- (void)_clearProgressView;
- (_Bool)_canSaveGestureWithName:(id)arg1;
- (void)_didSaveGestureWithName:(id)arg1;
- (void)_updateProgressView:(id)arg1;
- (void)_savePoint:(struct CGPoint)arg1;
- (void)_enterWaitingMode;
- (void)_enterReplayMode;
- (double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1;
- (void)gestureRecorderViewController:(id)arg1 didStartRecordingAtomicFingerPathAtPoint:(struct CGPoint)arg2;
- (void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1;
- (void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1;
- (_Bool)isChromeVisibleForGestureRecorderViewController:(id)arg1;
- (void)gestureRecorderViewController:(id)arg1 setChromeVisible:(_Bool)arg2;
- (void)gestureRecorderControlsView:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2;

@end
