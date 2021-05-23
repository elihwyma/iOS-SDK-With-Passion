/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel, UIView;

@protocol NTKComplicationImageView;

@interface NTKModularLargeStackTemplateView : NTKModularTemplateView

{
    NTKColoringLabel *_headerLeadingLabel;
    NTKColoringLabel *_headerTrailingLabel;
    _Bool _shouldTruncateHeaderLeadingLabelFirst;
    NTKColoringLabel *_body1Label;
    NTKColoringLabel *_body2Label;
    UIView<NTKComplicationImageView> *_headerGlyph;
    UIView<NTKComplicationImageView> *_body1Glyph;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_layoutContentView;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_updateLabelsMaxWidths;
- (id)_newLabelSubview;
- (void)_updateForStandardBodyTemplate:(id)arg1;
- (void)_updateForTallBodyTemplate:(id)arg1;

@end
