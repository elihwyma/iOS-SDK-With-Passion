/*
 Image: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
 */

#import <GPURawCounter/Swift-Protocol.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSString;

@protocol GPURawCounterSourceGroup <Swift>

@property (readonly) NSString *name;
@property (readonly) NSArray *sourceList;
@property unsigned long long samplingPeriodInMicroseconds;
@property unsigned long long samplingTriggers;
@property (copy) NSDictionary *vendorOptions;
@property (readonly) unsigned long long sampleMarker;
@property (readonly) unsigned long long availableCounterTriggers;

- (MISSING_TYPE *)stopSampling;
- (MISSING_TYPE *)startSampling;

@end
