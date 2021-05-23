/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularLargeColumnTemplateView.h>

@class CLKComplicationTemplateModularLargeTable, NTKColoringLabel, UIView;

@protocol NTKComplicationImageView;

@interface NTKModularLargeTableTemplateView : NTKModularLargeColumnTemplateView

{
    UIView<NTKComplicationImageView> *_headerImageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_row1Column1Label;
    NTKColoringLabel *_row1Column2Label;
    NTKColoringLabel *_row2Column1Label;
    NTKColoringLabel *_row2Column2Label;
}

@property (retain, nonatomic) CLKComplicationTemplateModularLargeTable *complicationTemplate;

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_layoutContentView;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColumnRowsWithBlock:(CDUnknownBlockType)arg1;

@end
