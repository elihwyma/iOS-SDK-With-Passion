/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class TransparencySFAnalytics;

@interface TransparencyAnalytics : NSObject

{
    TransparencySFAnalytics *_sfanalytics;
}

@property (retain) TransparencySFAnalytics *sfanalytics;

+ (id)logger;
+ (_Bool)hasInternalDiagnostics;
+ (id)formatEventName:(id)arg1 application:(id)arg2;
+ (_Bool)doWithAnalyticsForEventName:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;

- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3;
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3 withAttributes:(id)arg4;
- (void)logSuccessForEventNamed:(id)arg1;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)noteEventNamed:(id)arg1;
- (void)removeMultiSamplerForName:(id)arg1;
- (void)logMetric:(id)arg1 withName:(id)arg2;
- (void)addMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(CDUnknownBlockType)arg3;

@end
