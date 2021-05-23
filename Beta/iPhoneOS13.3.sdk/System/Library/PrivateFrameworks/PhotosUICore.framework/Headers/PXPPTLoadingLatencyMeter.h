/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface PXPPTLoadingLatencyMeter : NSObject

{
    CDStruct_4bbd3430 _lowQualityResults;
    CDStruct_4bbd3430 _mediumQualityResults;
    CDStruct_4bbd3430 _highQualityResults;
    NSString *_outputType;
    NSString *_measurementsUnit;
}

@property (retain, nonatomic) NSString *measurementsUnit;
@property (nonatomic, readonly) NSDictionary *measurementsDictionaryRepresentation;

+ (id)sharedInstance;
+ (void)startMeasurementsForOutputType:(id)arg1;
+ (void)stopMeasurements;

- (id)initWithOutputType:(id)arg1;
- (void)reportLatency:(double)arg1 forOutputQuality:(long long)arg2;
- (CDStruct_4bbd3430)measurementsForOutputQuality:(long long)arg1;
- (id)_measurementsDictionaryForOutputQuality:(long long)arg1;

@end
