/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

@class IXAppInstallCoordinatorSeed, NSArray, NSError, NSString, NSUUID;

@protocol IXAppInstallCoordinatorObserver, OS_dispatch_queue;

@interface IXAppInstallCoordinator : NSObject

{
    _Bool _complete;
    NSError *_error;
    unsigned long long _errorSourceIdentifier;
    id <IXAppInstallCoordinatorObserver> _observer;
    IXAppInstallCoordinatorSeed *_seed;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    unsigned long long _observersCalled;
}

@property (nonatomic, readonly) IXAppInstallCoordinatorSeed *seed;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observerCalloutQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) unsigned long long observersCalled;
@property (nonatomic, readonly) NSString *localDescription;
@property (nonatomic, getter=isComplete) _Bool complete;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long errorSourceIdentifier;
@property (nonatomic, readonly) _Bool hasAppAssetPromise;
@property (nonatomic, readonly) _Bool hasInstallOptions;
@property (nonatomic, readonly) _Bool hasInitialODRAssetPromises;
@property (nonatomic, readonly) _Bool hasUserDataPromise;
@property (copy, nonatomic, readonly) NSArray *validInstallTypes;
@property (nonatomic, readonly) unsigned long long coordinationState;
@property (nonatomic, readonly) unsigned long long creatorIdentifier;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (weak, nonatomic) id <IXAppInstallCoordinatorObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasPlaceholderPromise;

+ (void)prioritizeCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)pauseCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)resumeCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)removabilityForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)uninstallAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (id)_coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 intent:(unsigned long long)arg3 createIfNotExisting:(_Bool)arg4 created:(_Bool *)arg5 error:(id *)arg6;
+ (id)_coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 intent:(unsigned long long)arg3 createIfNotExisting:(_Bool)arg4 requireMatchingIntent:(_Bool)arg5 created:(_Bool *)arg6 error:(id *)arg7;
+ (_Bool)_synchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_asynchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;
+ (id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (_Bool)enumerateCoordinatorsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)enumerateCoordinatorsUsingBlock:(CDUnknownBlockType)arg1;
+ (Class)classForIntent:(unsigned long long)arg1;
+ (_Bool)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id *)arg4;
+ (void)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(_Bool)arg2 waitForDeletion:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(_Bool)arg2 waitForDeletion:(_Bool)arg3 error:(id *)arg4;
+ (_Bool)enumerateCoordinatorsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
+ (_Bool)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id *)arg4;
+ (void)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)pauseCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (_Bool)resumeCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (_Bool)prioritizeCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (void)setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)purgeAllCoordinatorsAndPromisesForCreator:(unsigned long long)arg1;
+ (_Bool)killDaemonForTesting;
+ (int)daemonPid;
+ (_Bool)postNSCurrentLocaleDidChangeNotification;
+ (_Bool)setTestingEnabled:(_Bool)arg1;
+ (_Bool)setTestModeForIdentifierPrefix:(id)arg1 testMode:(unsigned long long)arg2;
+ (void)_beginInstallForURL:(id)arg1 consumeSource:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)installApplication:(id)arg1 consumeSource:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)installApplication:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 error:(id *)arg4;
+ (void)_demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 error:(id *)arg3;
+ (void)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (_Bool)resumeWithError:(id *)arg1;
- (_Bool)setAppAssetPromise:(id)arg1 error:(id *)arg2;
- (id)appAssetPromiseWithError:(id *)arg1;
- (_Bool)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id *)arg1;
- (_Bool)appAssetPromiseHasBegunFulfillment:(_Bool *)arg1 error:(id *)arg2;
- (_Bool)setInstallOptions:(id)arg1 error:(id *)arg2;
- (_Bool)setUserDataPromise:(id)arg1 error:(id *)arg2;
- (id)userDataPromiseWithError:(id *)arg1;
- (id)userDataRestoreShouldBegin:(_Bool *)arg1;
- (void)_updateInitWithSeed:(id)arg1 notifyDaemon:(_Bool)arg2;
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setPlaceholderPromise:(id)arg1 error:(id *)arg2;
- (id)placeholderPromiseWithError:(id *)arg1;
- (id)initWithBundleID:(id)arg1 creator:(unsigned long long)arg2 intent:(unsigned long long)arg3;
- (void)cancelForReason:(id)arg1;
- (_Bool)setImportance:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)importanceWithError:(id *)arg1;
- (_Bool)setInitialODRAssetPromises:(id)arg1 error:(id *)arg2;
- (id)initialODRAssetPromisesWithError:(id *)arg1;
- (id)preparationPromiseWithError:(id *)arg1;
- (_Bool)setPreparationPromise:(id)arg1 withError:(id *)arg2;
- (_Bool)setDeviceSecurityPromise:(id)arg1 error:(id *)arg2;
- (id)deviceSecurityPromiseWithError:(id *)arg1;
- (_Bool)pauseWithError:(id *)arg1;
- (_Bool)isPaused:(_Bool *)arg1 withError:(id *)arg2;
- (_Bool)prioritizeWithError:(id *)arg1;
- (oneway void)_clientDelegate_shouldPrioritize;
- (oneway void)_clientDelegate_shouldResume;
- (oneway void)_clientDelegate_shouldPause;
- (oneway void)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;
- (oneway void)_clientDelegate_shouldBeginRestoringUserData;
- (oneway void)_clientDelegate_placeholderDidInstall;
- (oneway void)_clientDelegate_didComplete;
- (oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2;

@end
