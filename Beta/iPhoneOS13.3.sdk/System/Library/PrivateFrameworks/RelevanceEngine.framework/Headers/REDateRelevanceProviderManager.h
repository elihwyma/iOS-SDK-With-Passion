/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSDate, NSDateInterval;

@interface REDateRelevanceProviderManager : RERelevanceProviderManager

{
    NSDate *_lastDateUpdate;
    NSDateInterval *_todayInterval;
}

@property (nonatomic, readonly) NSDate *lastDateUpdate;
@property (nonatomic, readonly) NSDate *todayStart;
@property (nonatomic, readonly) NSDate *todayEnd;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (_Bool)_wantsSeperateRelevanceQueue;
+ (_Bool)_supportsHistoricProviders;
+ (id)_dependencyClasses;

- (void)pause;
- (void)resume;
- (void)_handleSignificantTimeChange;
- (void)_prepareForUpdate;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (void)_addedProvider:(id)arg1;
- (_Bool)_isHistoricProvider:(id)arg1;
- (id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2;
- (void)_scheduleUpdatesForDateProvider:(id)arg1;
- (void)_scheduleUpdateForDate:(id)arg1;

@end
