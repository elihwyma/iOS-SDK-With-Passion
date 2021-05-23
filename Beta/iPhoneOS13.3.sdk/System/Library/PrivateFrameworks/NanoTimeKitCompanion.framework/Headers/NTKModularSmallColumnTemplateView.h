/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class CLKComplicationTemplateModularSmallColumnsText, NTKColoringLabel;

@interface NTKModularSmallColumnTemplateView : NTKModularTemplateView

{
    NTKColoringLabel *_row1Column1Label;
    NTKColoringLabel *_row1Column2Label;
    NTKColoringLabel *_row2Column1Label;
    NTKColoringLabel *_row2Column2Label;
    _Bool _calculatedFontSize;
}

@property (nonatomic, readonly) CLKComplicationTemplateModularSmallColumnsText *complicationTemplate;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_layoutContentView;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)_newLabelSubview;
- (id)_headerFontOfSize:(double)arg1;
- (id)_bodyFontOfSize:(double)arg1;

@end
