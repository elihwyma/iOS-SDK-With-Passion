/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIViewController.h>

@class BKUIPearlCoachingDeviceView, BKUIPearlInstructionView, UIButton;

@protocol BKUIPearlCoachingControllerDelegate;

@interface BKUIPearlCoachingController : UIViewController

{
    _Bool _inBuddy;
    _Bool _isDisplayZoomEnabled;
    long long _orientation;
    id <BKUIPearlCoachingControllerDelegate> _delegate;
    BKUIPearlCoachingDeviceView *_deviceView;
    BKUIPearlInstructionView *_instructionView;
    UIButton *_escapeHatchButton;
}

@property (retain, nonatomic) BKUIPearlCoachingDeviceView *deviceView;
@property (retain, nonatomic) BKUIPearlInstructionView *instructionView;
@property (retain, nonatomic) UIButton *escapeHatchButton;
@property (nonatomic, readonly, getter=isDeviceFlat) _Bool deviceFlat;
@property long long orientation;
@property (nonatomic) _Bool inBuddy;
@property (nonatomic) _Bool isDisplayZoomEnabled;
@property (weak, nonatomic) id <BKUIPearlCoachingControllerDelegate> delegate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)deviceOrientationChanged;
- (_Bool)needsToShow;
- (void)stopCoachingAnimation;
- (void)updateInstructionText;
- (void)escapeHatchButtonPressed:(id)arg1;
- (_Bool)resetDeviceView;
- (_Bool)didOrientationChange;
- (void)handleRotation;

@end
