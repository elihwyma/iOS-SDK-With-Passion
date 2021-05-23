/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@interface HROnboardingInlineExpandedContentView : UIView

{
    long long _currentUserInterfaceStyle;
}

@property (nonatomic) long long currentUserInterfaceStyle;

+ (id)_bodyFont;
+ (id)_bodyFontTextStyle;
+ (id)learnMoreAboutAtrialFibrillationExpandedView;
+ (id)sinusRhythmExpandedView;
+ (id)atrialFibrillationExpandedView;
+ (id)highOrLowHeartRateExpandedView;
+ (id)inconclusiveExpandedViewWithDelegate:(id)arg1;
+ (id)_bodyLabelWithLocalizationKey:(id)arg1;
+ (double)_bodyFontDistance;
+ (id)_headingLabelWithLocalizationKey:(id)arg1;
+ (id)_listLabelWithLocalizationKey:(id)arg1;
+ (double)_headingBodyFontDistance;
+ (double)_listFontDistance;
+ (id)_learnMoreListLabelWithLocalizationKey:(id)arg1 URLIdentifier:(long long)arg2 delegate:(id)arg3;
+ (double)_listLastBaselineToBodyFirstBaseline;
+ (id)_bodyLabelWithAtrialFibrillationLocalizationKey:(id)arg1;
+ (id)_headingLabelWithAtrialFibrillationLocalizationKey:(id)arg1;
+ (id)_listLabelWithAtrialFibrillationLocalizationKey:(id)arg1;
+ (id)_headingBodyFont;
+ (id)_bulletedTextViewWithLocalizationKey:(id)arg1;
+ (double)_headingLastBaselineToBodyFirstBaseline;

@end
