/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EDSearchableIndexBudgetConfiguration : NSObject

{
    _Bool _enableActivityBasedScheduling;
    _Bool _autoStartMaintenanceIndexing;
    _Bool _allowBacklogIndexingOnPower;
    double _time;
    double _periodDuration;
    long long _numberOfItemsToIndexOnResume;
}

@property (nonatomic) _Bool enableActivityBasedScheduling;
@property (nonatomic) _Bool autoStartMaintenanceIndexing;
@property (nonatomic) _Bool allowBacklogIndexingOnPower;
@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) double periodDuration;
@property (nonatomic, readonly) long long numberOfItemsToIndexOnResume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (id)defaultConfiguration;
+ (id)nonSchedulingBudgetConfiguration;

- (id)init;
- (id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3 enableActivityBasedScheduling:(_Bool)arg4 autoStartMaintenanceIndexing:(_Bool)arg5 allowBacklogIndexingOnPower:(_Bool)arg6;
- (id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3;

@end
