/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularLargeColumnTemplateView.h>

@class NTKColoringLabel, UIView;

@protocol NTKComplicationImageView;

@interface NTKModularLargeColumnsOnlyTemplateView : NTKModularLargeColumnTemplateView

{
    NTKColoringLabel *_row1Column1Label;
    NTKColoringLabel *_row1Column2Label;
    NTKColoringLabel *_row2Column1Label;
    NTKColoringLabel *_row2Column2Label;
    NTKColoringLabel *_row3Column1Label;
    NTKColoringLabel *_row3Column2Label;
    UIView<NTKComplicationImageView> *_row1ImageView;
    UIView<NTKComplicationImageView> *_row2ImageView;
    UIView<NTKComplicationImageView> *_row3ImageView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_layoutContentView;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColumnRowsWithBlock:(CDUnknownBlockType)arg1;

@end
