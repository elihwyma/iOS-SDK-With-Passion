/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIViewController.h>

@class CMMotionManager, NSObject, SFMagicHeadWheelView, UILabel;

@protocol SFAirDropMagicHeadViewControllerDelegate;

@interface SFAirDropMagicHeadViewController : UIViewController

{
    _Bool _magicHead;
    _Bool _enabled;
    _Bool _viewVisible;
    _Bool _motionUpdatesStarted;
    NSObject<SFAirDropMagicHeadViewControllerDelegate> *_delegate;
    unsigned long long _numberOfDots;
    double _dotsRadius;
    UILabel *_nameLabel;
    UILabel *_nameLabel2;
    UILabel *_secondLabel;
    CMMotionManager *_motionManager;
    double _initialAngleDegrees;
    long long _currentOrientation;
    SFMagicHeadWheelView *_wheelView;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *nameLabel2;
@property (retain, nonatomic) UILabel *secondLabel;
@property (nonatomic) _Bool viewVisible;
@property (nonatomic) _Bool motionUpdatesStarted;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) double initialAngleDegrees;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) SFMagicHeadWheelView *wheelView;
@property (weak) NSObject<SFAirDropMagicHeadViewControllerDelegate> *delegate;
@property (nonatomic) unsigned long long numberOfDots;
@property (nonatomic) double dotsRadius;
@property (nonatomic, getter=isMagicHead) _Bool magicHead;
@property (nonatomic, readonly) _Bool shouldBeHidden;
@property (nonatomic) _Bool enabled;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)update;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)updateLabels;
- (void)magicHeadSelectedHeadRequestingDisabledState:(_Bool)arg1;
- (void)magicHeadChangedFacingDegree:(double)arg1;
- (void)magicHeadSelectedNodeTapped:(id)arg1;
- (void)magicHeadChangedSelectionToNode:(id)arg1;
- (void)magicHeadSelectedHeadRequestingSubtitleTextChangeForState:(long long)arg1;
- (void)magicHeadDidStartTransferForNode:(id)arg1;
- (void)magicHeadDidTerminateTransferForNode:(id)arg1;
- (void)magicHeadDidFinishTransferForNode:(id)arg1;
- (void)handleDeviceMotion:(id)arg1;
- (void)resetSecondLabel;
- (void)calculatePreferredSize;
- (void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2;
- (id)headForRealName:(id)arg1;
- (void)setSecondLabelText:(id)arg1 withTextColor:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateNodes:(id)arg1 withPersonToProgress:(id)arg2;
- (void)resetTransferStateWithRealName:(id)arg1;
- (void)userSelectedWithRealName:(id)arg1;
- (void)transferCancelledToPerson:(id)arg1;

@end
