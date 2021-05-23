/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKBreatheEntryModel : NTKTimelineEntryModel

{
    _Bool _isLoading;
    _Bool _isLocked;
    unsigned long long _minutesBreathed;
}

@property (nonatomic) unsigned long long minutesBreathed;
@property (nonatomic) _Bool isLoading;
@property (nonatomic) _Bool isLocked;

+ (id)companionModel;
+ (id)lockedEntryModel;
+ (_Bool)supportsFlowerImages;
+ (_Bool)familySupportsLiveData:(long long)arg1;
+ (id)modelWithActivitySummary:(id)arg1;

- (id)templateForComplicationFamily:(long long)arg1;
- (id)_modularSmallTemplate;
- (id)_circularSmallTemplate;
- (id)_utilitarianSmallTemplate;
- (id)_extraLargeTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureBezelTemplate;
- (id)_signatureCornerTemplate;
- (id)_circularMediumTemplate;

@end
