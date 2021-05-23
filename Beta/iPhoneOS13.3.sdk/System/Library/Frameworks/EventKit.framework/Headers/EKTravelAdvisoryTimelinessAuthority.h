/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol CalDateProvider, OS_dispatch_queue, OS_dispatch_source;

@interface EKTravelAdvisoryTimelinessAuthority : NSObject

{
    _Bool _internalActive;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_startOfLeaveNowPeriodInternal;
    NSDate *_startOfRunningLatePeriodInternal;
    unsigned long long _internalPeriod;
    CDUnknownBlockType _internalPeriodChangedCallback;
    id <CalDateProvider> _dateProvider;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSDate *startOfLeaveNowPeriodInternal;
@property (retain, nonatomic) NSDate *startOfRunningLatePeriodInternal;
@property (nonatomic) _Bool internalActive;
@property (nonatomic) unsigned long long internalPeriod;
@property (copy, nonatomic) CDUnknownBlockType internalPeriodChangedCallback;
@property (nonatomic, readonly) id <CalDateProvider> dateProvider;
@property (nonatomic, readonly) NSDate *startOfLeaveNowPeriod;
@property (nonatomic, readonly) NSDate *startOfRunningLatePeriod;
@property (copy, nonatomic) CDUnknownBlockType periodChangedCallback;
@property (nonatomic, readonly) unsigned long long period;

+ (id)stringForPeriod:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)active;
- (void)activate;
- (void)deactivate;
- (void)_refreshTimer;
- (void)_refresh;
- (void)_refreshPeriod;
- (void)_uninstallTimer;
- (id)initWithDateProvider:(id)arg1;
- (void)_refreshOnDate:(id)arg1;
- (void)updateWithHypothesis:(id)arg1;

@end
