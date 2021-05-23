/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class CLKFont, NSString, NTKColoringLabel, NTKRichComplicationLineProgressView, UILayoutGuide;

@interface NTKUpNextGaugeCell : NTKUpNextBaseCell

{
    UILayoutGuide *_contentLayoutGuide;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKRichComplicationLineProgressView *_progressView;
    NTKColoringLabel *_descriptionLine2Label;
    NTKColoringLabel *_descriptionLine3Label;
    CLKFont *_standardFont;
    CLKFont *_boldFont;
    CLKFont *_semiboldFont;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (void)setPaused:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureWithContent:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;

@end
