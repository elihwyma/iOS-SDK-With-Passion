/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object, PHAActivityGovernorDelegate;

@interface PHAActivityGovernor : NSObject

{
    char *_backgroundActivityName;
    char *_foregroundActivityName;
    _Bool _hasBackgroundAccess;
    _Bool _hasForegroundAccess;
    _Bool _wantsBackgroundAccess;
    _Bool _wantsForegroundAccess;
    _Bool _overrideAccess;
    _Bool _simulatedWantsDefer;
    _Bool _simulatedNeverHasAccess;
    id <PHAActivityGovernorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_foregroundActivity;
    NSObject<OS_dispatch_source> *_foregroundDeferCheckTimer;
    double _timeOfLastForegroundWantRequest;
    double _timeSpentWantingForeground;
    double _timeOfLastForegroundGrant;
    double _timeSpentForegroundGranted;
    NSObject<OS_xpc_object> *_backgroundActivity;
    NSObject<OS_dispatch_source> *_backgroundDeferCheckTimer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_xpc_object> *foregroundActivity;
@property (retain) NSObject<OS_dispatch_source> *foregroundDeferCheckTimer;
@property (nonatomic) _Bool hasForegroundAccess;
@property (nonatomic) double timeOfLastForegroundWantRequest;
@property (nonatomic) double timeSpentWantingForeground;
@property (nonatomic) double timeOfLastForegroundGrant;
@property (nonatomic) double timeSpentForegroundGranted;
@property (retain) NSObject<OS_xpc_object> *backgroundActivity;
@property (retain) NSObject<OS_dispatch_source> *backgroundDeferCheckTimer;
@property (nonatomic) _Bool hasBackgroundAccess;
@property (nonatomic) _Bool simulatedWantsDefer;
@property (nonatomic) _Bool simulatedNeverHasAccess;
@property (nonatomic) _Bool wantsBackgroundAccess;
@property (nonatomic) _Bool wantsForegroundAccess;
@property (nonatomic) _Bool overrideAccess;
@property (weak, nonatomic) id <PHAActivityGovernorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)statusAsDictionary;
- (void)_inq_removeDeferTimer:(id)arg1;
- (void)_inq_teardownActivity:(id *)arg1 accessLevel:(unsigned long long)arg2 timer:(id)arg3;
- (void)_inq_installDeferMonitorForActivity:(id)arg1 accessLevel:(unsigned long long)arg2;
- (void)_inq_registerActivityNamed:(const char *)arg1 withCriteria:(id)arg2 accessLevel:(unsigned long long)arg3;
- (void)_inq_finishActivity:(id *)arg1 accessLevel:(unsigned long long)arg2 timer:(id)arg3;
- (void)_generateActivityNames;
- (const char *)_activityNameForLevel:(unsigned long long)arg1;
- (_Bool)_inq_hasAccessForLevel:(unsigned long long)arg1;
- (_Bool)_inq_wantsAccessForLevel:(unsigned long long)arg1;
- (void)_inq_handleRequestChangeForAccessLevel:(unsigned long long)arg1;

@end
