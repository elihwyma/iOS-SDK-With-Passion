/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CSExtensionJobThrottle : NSObject

{
    unsigned long long _maxRetryCount;
    unsigned long long _minSecondsBetweenRetries;
    unsigned long long _maxSecondsBetweenRetries;
    unsigned long long _minSecondsBetweenRetriesUnderMemoryPressure;
    unsigned long long _maxSecondsBetweenRetriesUnderMemoryPressure;
    NSMutableDictionary *_countersByBundleID;
}

@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) unsigned long long minSecondsBetweenRetries;
@property (nonatomic) unsigned long long maxSecondsBetweenRetries;
@property (nonatomic) unsigned long long minSecondsBetweenRetriesUnderMemoryPressure;
@property (nonatomic) unsigned long long maxSecondsBetweenRetriesUnderMemoryPressure;
@property (retain, nonatomic) NSMutableDictionary *countersByBundleID;

- (id)initWithDictionary:(id)arg1;
- (long long)nextDispatchTimeDeltaForExtension:(id)arg1 job:(id)arg2 memoryPressure:(_Bool)arg3;

@end
