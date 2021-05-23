/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSArray, NSDate;

@interface NTKHeartRateTimelineEntryModel : NTKTimelineEntryModel

{
    _Bool _hasBPM;
    _Bool _lessThanMinute;
    _Bool _locked;
    _Bool _hasSummary;
    NSDate *_measurementDate;
    long long _BPM;
    long long _dailyLowBPM;
    long long _dailyHighBPM;
    NSArray *_chartPoints;
}

@property (retain, nonatomic) NSDate *measurementDate;
@property (nonatomic) long long BPM;
@property (nonatomic) _Bool hasBPM;
@property (nonatomic) _Bool lessThanMinute;
@property (nonatomic, getter=isLocked) _Bool locked;
@property (nonatomic) _Bool hasSummary;
@property (nonatomic) long long dailyLowBPM;
@property (nonatomic) long long dailyHighBPM;
@property (retain, nonatomic) NSArray *chartPoints;

- (id)_newExtraLargeTemplate;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianSmallTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newModularLargeTemplate;
- (id)_newCircularTemplateUsingMediumSize:(_Bool)arg1;
- (id)_bpmString;
- (id)_heartrateString;
- (id)_signaturebezelTextProvider;
- (id)_metadataWithCurrentMeasurements;

@end
