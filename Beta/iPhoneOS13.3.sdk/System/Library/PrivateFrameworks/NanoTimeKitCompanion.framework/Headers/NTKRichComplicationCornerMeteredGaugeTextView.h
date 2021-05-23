/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerGaugeTextView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerMeteredGaugeTextView : NTKRichComplicationCornerGaugeTextView

{
    NTKRichComplicationImageView *_outerImageView;
}

@property (nonatomic, readonly) NTKRichComplicationImageView *outerImageView;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (long long)progressFillStyle;

- (id)init;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;

@end
