/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

#import <Foundation/NSObject.h>

@class UIFont;

@interface WLWelcomeViewControllerMetrics : NSObject

{
    _Bool _isIPad;
    _Bool _uiTestMode;
    _Bool _uiTestModeForceDownloadError;
    float _vPriorityOfOffsetFromContentReferencePointToIntroDetailBaselineOnIPad;
    UIFont *_titleFont;
    UIFont *_generalFont;
    UIFont *_buttonFont;
    double _scale;
    double _vOffsetFromViewTopToImageTop;
    double _vOffsetFromViewTopToTitleBaseline;
    double _vOffsetFromViewTopToGroupViewContentReferencePoint;
    double _vOffsetFromViewBottomToButtonBaseline;
    double _vOffsetFromContentReferencePointToExplanationBaseline;
    double _vOffsetFromContentReferencePointToIntroDetailBaseline;
    double _vOffsetFromIntroDetailBaselineToContinueButtonBaselineOnIPad;
    UIFont *_pairingCodeFont;
    double _vOffsetFromContentReferencePointToPairingCodeBaseline;
    double _vOffsetFromContentReferencePointToProgressStateBaseline;
    double _hGapBetweenProgressSpinnerAndState;
    double _vOffsetFromProgressStateBaselineToDeviceNameBaseline;
    double _vOffsetFromProgressStateBaselineToProgressBarTop;
}

@property (nonatomic) _Bool isIPad;
@property (nonatomic) _Bool uiTestMode;
@property (nonatomic) _Bool uiTestModeForceDownloadError;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *generalFont;
@property (retain, nonatomic) UIFont *buttonFont;
@property (nonatomic) double scale;
@property (nonatomic) double vOffsetFromViewTopToImageTop;
@property (nonatomic) double vOffsetFromViewTopToTitleBaseline;
@property (nonatomic) double vOffsetFromViewTopToGroupViewContentReferencePoint;
@property (nonatomic) double vOffsetFromViewBottomToButtonBaseline;
@property (nonatomic) double vOffsetFromContentReferencePointToExplanationBaseline;
@property (nonatomic) double vOffsetFromContentReferencePointToIntroDetailBaseline;
@property (nonatomic) float vPriorityOfOffsetFromContentReferencePointToIntroDetailBaselineOnIPad;
@property (nonatomic) double vOffsetFromIntroDetailBaselineToContinueButtonBaselineOnIPad;
@property (retain, nonatomic) UIFont *pairingCodeFont;
@property (nonatomic) double vOffsetFromContentReferencePointToPairingCodeBaseline;
@property (nonatomic) double vOffsetFromContentReferencePointToProgressStateBaseline;
@property (nonatomic) double hGapBetweenProgressSpinnerAndState;
@property (nonatomic) double vOffsetFromProgressStateBaselineToDeviceNameBaseline;
@property (nonatomic) double vOffsetFromProgressStateBaselineToProgressBarTop;

@end
