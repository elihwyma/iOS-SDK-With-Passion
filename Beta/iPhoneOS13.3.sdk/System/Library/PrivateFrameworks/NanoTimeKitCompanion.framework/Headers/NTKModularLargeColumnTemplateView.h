/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@interface NTKModularLargeColumnTemplateView : NTKModularTemplateView

{
    _Bool _useNoColumnPadding;
}

@property (nonatomic) _Bool useNoColumnPadding;

- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_enumerateColumnRowsWithBlock:(CDUnknownBlockType)arg1;
- (void)_positionLeadingAlignedImageView:(id)arg1 label:(id)arg2 withBaselineOffset:(double)arg3;
- (void)_layoutRowsOfColumnsWithAlignment:(long long)arg1;
- (id)_newHeaderLabelSubview;
- (id)_newBodyLabelSubview;

@end
