/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCRateControlUtil : NSObject

+ (_Bool)prepareOWRDList:(CDStruct_55dce769 *)arg1 owrd:(double)arg2 time:(double)arg3 config:(struct VCRateControlAlgorithmConfig)arg4;
+ (void)calculateNOWRDWithOWRDList:(CDStruct_55dce769 *)arg1 config:(struct VCRateControlAlgorithmConfig)arg2 isInitialRampUp:(_Bool)arg3;
+ (void)calculateNOWRDShortWithOWRDList:(CDStruct_55dce769 *)arg1 config:(struct VCRateControlAlgorithmConfig)arg2 isInitialRampUp:(_Bool)arg3;
+ (void)calculateNOWRDAccWithOWRDList:(CDStruct_55dce769 *)arg1 config:(struct VCRateControlAlgorithmConfig)arg2;
+ (double)calculateNOWRDWithDuration:(double)arg1 owrdList:(CDStruct_55dce769 *)arg2 historySize:(unsigned int)arg3 minHistorySize:(unsigned int)arg4 initalRampUpReadyDuration:(double)arg5 isInitialRampUp:(_Bool)arg6;
+ (_Bool)calculateCongestionMetricsFromOWRDList:(CDStruct_55dce769 *)arg1 owrd:(double)arg2 time:(double)arg3 config:(struct VCRateControlAlgorithmConfig)arg4 isInitialRampUp:(_Bool)arg5;

@end
