/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <PhotosFormats/PFAssetAdjustments.h>

@interface PFVideoAdjustments : PFAssetAdjustments

{
    float _slowMotionRate;
    CDStruct_e83c9415 _slowMotionTimeRange;
}

@property (nonatomic, readonly) float slowMotionRate;
@property (nonatomic, readonly) CDStruct_e83c9415 slowMotionTimeRange;
@property (nonatomic, readonly) CDStruct_e83c9415 slowMotionRampIn;
@property (nonatomic, readonly) CDStruct_e83c9415 slowMotionRampOut;
@property (nonatomic) float slowMotionRate;
@property (nonatomic) CDStruct_e83c9415 slowMotionTimeRange;

+ (float)defaultSlowMotionRateForNominalFrameRate:(float)arg1;
+ (CDStruct_e83c9415)defaultSlowMotionTimeRangeForDuration:(CDStruct_1b6d18a9)arg1;
+ (_Bool)isRecognizedFormatWithIdentifier:(id)arg1 version:(id)arg2;
+ (id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1;
+ (id)defaultSlowMotionAdjustmentsForAsset:(id)arg1;

- (id)description;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (_Bool)isRecognizedFormat;
- (_Bool)hasSlowMotionAdjustments;
- (CDStruct_1b6d18a9)convertToOriginalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
- (CDStruct_1b6d18a9)convertToScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
- (void)_updateDerivedPropertiesFromVersionedData;
- (_Bool)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;
- (_Bool)_parseVersionedDataForSlowMotionTimeRange:(CDStruct_e83c9415 *)arg1 rate:(float *)arg2;
- (_Bool)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;
- (id)_dictionaryFromSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1;
- (_Bool)_isValidSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;

@end
