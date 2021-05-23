/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface HDMCSymptomHistoryBuilder : NSObject

{
    NSMutableDictionary *_mostRecentDayBySymptom;
    unsigned long long _recentSymptoms;
}

@property (nonatomic) unsigned long long recentSymptoms;

- (id)initWithCurrentDayIndex:(long long)arg1;
- (void)addSymptoms:(unsigned long long)arg1 forDayIndex:(long long)arg2;

@end
