/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HKAnchoredObjectQuery, HKElectrocardiogram, HKHeartRhythmAvailability, HRImageLabel, UILabel, UIView;

@interface HROnboardingElectrocardiogramTakeRecordingViewController : HROnboardingBaseViewController

{
    _Bool _electrocardiogramFirstRecordingCompleted;
    _Bool _didStepForward;
    HKHeartRhythmAvailability *_availability;
    HKAnchoredObjectQuery *_electrocardiogramQuery;
    HKElectrocardiogram *_electrocardiogram;
    UIView *_assetView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    HRImageLabel *_recordingStep1ImageLabel;
    HRImageLabel *_recordingStep2ImageLabel;
    UILabel *_wristSettingsLabel;
}

@property (retain, nonatomic) HKHeartRhythmAvailability *availability;
@property (retain, nonatomic) HKAnchoredObjectQuery *electrocardiogramQuery;
@property (retain, nonatomic) HKElectrocardiogram *electrocardiogram;
@property (nonatomic) _Bool electrocardiogramFirstRecordingCompleted;
@property (nonatomic) _Bool didStepForward;
@property (retain, nonatomic) UIView *assetView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRImageLabel *recordingStep1ImageLabel;
@property (retain, nonatomic) HRImageLabel *recordingStep2ImageLabel;
@property (retain, nonatomic) UILabel *wristSettingsLabel;

- (void)viewDidLoad;
- (id)_titleFont;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setUpConstraints;
- (void)heartRhythmAvailabilityDidUpdate;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (void)setUpUI;
- (id)_bodyFontTextStyle;
- (id)initForOnboarding:(_Bool)arg1;
- (void)skipButtonTapped:(id)arg1;
- (void)_setUpElectrocardiogramQuery;
- (void)_stopElectrocardiogramQuery;
- (id)_titleForOnboarding:(_Bool)arg1;
- (struct CGSize)_takeRecordingImageDimension;
- (void)_stepForwardWithElectrocardiogramRecorded:(_Bool)arg1;
- (id)_recordingStepFont;

@end
