/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class AWDAgent, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AnalyticsLaunchpad : NSObject

{
    NSObject<OS_dispatch_queue> *launch_queue;
    NSObject<OS_dispatch_queue> *flows_queue;
    NSObject<OS_dispatch_queue> *nets_queue;
    NSObject<OS_dispatch_queue> *nois_queue;
    NSObject<OS_dispatch_queue> *service_queue;
    AWDAgent *awd;
    NSMutableDictionary *_launchParams;
}

@property (retain, nonatomic) NSMutableDictionary *launchParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)clearIntegrityCheckBreadcrumb;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (id)symptomEvaluatorDatabaseContainerPath;
+ (_Bool)launchHealthCheck:(id)arg1;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)leaveBreadcrumbForIntegrityCheck;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (_Bool)foundBreadcrumb:(id)arg1;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)arg1;
+ (void)appendLaunchTime;
+ (_Bool)foundDestroyPersistentStoreBreadcrumb;
+ (_Bool)foundIntegrityCheckBreadcrumbAboveThreshold:(_Bool)arg1;
+ (_Bool)foundInitialWorkspaceSaveBreadcrumb;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (id)configureClass:(id)arg1;

- (id)init;
- (void)integrityCheckStarted;
- (void)integrityCheckCompleted:(_Bool)arg1 error:(id)arg2;
- (void)deleteDatabaseCompleted:(_Bool)arg1 error:(id)arg2;
- (void)destroyPersistentStoreStarted;
- (void)destroyPersistentStoreCompleted:(_Bool)arg1 error:(id)arg2;
- (int)configureInstance:(id)arg1;
- (void)_launchSequence:(id)arg1;
- (void)launchSequence;

@end
