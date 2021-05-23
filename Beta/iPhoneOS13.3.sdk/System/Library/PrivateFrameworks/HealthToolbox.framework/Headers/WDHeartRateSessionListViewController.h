/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class NSArray, NSDateInterval, NSMutableArray, WDProfile;

__attribute__((visibility("hidden")))
@interface WDHeartRateSessionListViewController : HKTableViewController

{
    long long _sessionType;
    NSArray *_sessions;
    NSMutableArray *_activeDataQueries;
    NSDateInterval *_dateInterval;
    WDProfile *_profile;
}

@property (nonatomic) long long sessionType;
@property (retain, nonatomic) NSArray *sessions;
@property (retain, nonatomic) NSMutableArray *activeDataQueries;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (retain, nonatomic) WDProfile *profile;

- (void)dealloc;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_sampleType;
- (void)_startSessionQuery;
- (id)_queryPredicateForDateInterval:(id)arg1;
- (void)_startHeartRateRangeQueries;
- (void)_startHeartRateRangeQueryForSession:(id)arg1 index:(unsigned long long)arg2;
- (void)_pushControllerForSession:(id)arg1;
- (id)initWithSessionType:(long long)arg1 dateInterval:(id)arg2 profile:(id)arg3;

@end
