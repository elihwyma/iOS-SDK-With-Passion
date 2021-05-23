/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface CSStatusTextView : UIView

{
    _UILegibilitySettings *_legibilitySettings;
    double _strength;
    SBUILegibilityLabel *_internalLegalTextLabel;
    SBUILegibilityLabel *_deviceInformationLabel;
    SBUILegibilityLabel *_supervisionLabel;
    SBUILegibilityLabel *_provisionalEnrollmentLabel;
    unsigned long long _transactionCount;
    NSString *_internalLegalText;
    NSString *_supervisionText;
    NSArray *_deviceInformationText;
    NSString *_provisionalEnrollmentText;
}

@property (copy, nonatomic) NSString *internalLegalText;
@property (copy, nonatomic) NSString *supervisionText;
@property (copy, nonatomic) NSArray *deviceInformationText;
@property (copy, nonatomic) NSString *provisionalEnrollmentText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;

- (id)_font;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateLegibilityStrength;
- (void)updateTextsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateTextViewsIfNecessary;
- (double)_spacingBetweenNonLegalLabels;
- (void)_updateTextViews;
- (void)_updateInternalLegalLabel;
- (void)_updateSupervisionLabel;
- (void)_updateProvisionalEnrollmentLabel;
- (void)_updateDeviceInformationLabel;
- (double)_nonLegalLabelFontLeading;
- (id)_largeFont;
- (double)_nonLegalTextParagraphSpacing;
- (double)_lineHeightOfNonLegalLabels;

@end
