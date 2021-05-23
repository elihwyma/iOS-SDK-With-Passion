/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel

{
    float _level;
    long long _state;
}

@property (nonatomic) float level;
@property (nonatomic) long long state;

- (id)templateForComplicationFamily:(long long)arg1;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureBezelTemplate;
- (id)_signatureCornerTemplate;
- (id)_newBatteryTemplateForFamily:(long long)arg1;
- (id)_levelTintColor;
- (id)_ringTextProvider;

@end
