/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary;

@interface _CDAutoSuCache : NSObject

{
    NSDictionary *_predictedSleep;
    NSDate *_predictedSleepValidityStartDate;
    NSDate *_predictedSleepValidityEndDate;
}

@property (retain) NSDictionary *predictedSleep;
@property (retain) NSDate *predictedSleepValidityStartDate;
@property (retain) NSDate *predictedSleepValidityEndDate;

+ (id)sharedCache;

- (void)clear;
- (void)setCachedPredictedSleepDictionary:(id)arg1 validityStartDate:(id)arg2 validityEndDate:(id)arg3;
- (id)cachedPredictedSleepDictionaryForDate:(id)arg1;

@end
