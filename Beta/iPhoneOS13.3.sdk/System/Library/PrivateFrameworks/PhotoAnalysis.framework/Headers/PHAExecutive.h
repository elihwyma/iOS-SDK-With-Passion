/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PFSerialQueue, PHAActivityLog, PHAPhotoLibraryList, PHASleepWakeMonitor;

@protocol OS_dispatch_source, OS_voucher, OS_xpc_object, PFDTransactionDispatchQueue;

@interface PHAExecutive : NSObject

{
    _Bool _isPhotoAnalysisAgent;
    _Bool _backgroundAnalysisActivityTriggered;
    PFSerialQueue<PFDTransactionDispatchQueue> *_executiveStateQueue;
    NSObject<OS_voucher> *_turboModeBoostVoucher;
    NSMutableArray *_processingLog;
    PHAActivityLog *_currentLog;
    NSMutableArray *_cachedTurboLibraryURLs;
    NSObject<OS_xpc_object> *_turboAnalysisActivity;
    struct os_unfair_lock_s _turboLibrariesLock;
    NSMutableSet *_pendingBackgroundLibraries;
    struct os_unfair_lock_s _connectedClientsLock;
    _Bool _shouldDeferActivity;
    unsigned char _state;
    PHAActivityLog *_activityLog;
    NSMutableSet *_clients;
    NSMutableDictionary *_managersByLibraryPath;
    PHAPhotoLibraryList *_photoLibraryList;
    PHASleepWakeMonitor *_sleepWakeMonitor;
    long long _countOfCoordinatorsRunningBackgroundAnalysis;
    NSObject<OS_dispatch_source> *_backgroundAnalysisMonitorTimer;
    NSObject<OS_xpc_object> *_backgroundAnalysisActivity;
}

@property (retain) NSMutableSet *clients;
@property (retain) NSMutableDictionary *managersByLibraryPath;
@property unsigned char state;
@property (retain) PHAPhotoLibraryList *photoLibraryList;
@property (retain) PHASleepWakeMonitor *sleepWakeMonitor;
@property long long countOfCoordinatorsRunningBackgroundAnalysis;
@property (retain) NSObject<OS_dispatch_source> *backgroundAnalysisMonitorTimer;
@property (retain) NSObject<OS_xpc_object> *backgroundAnalysisActivity;
@property (readonly) PHAActivityLog *activityLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bootDateForTurboLibraryRegistration;
+ (void)unregisterBackgroundActivities;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)shutdown;
- (void)notifyLibraryAvailableAtURL:(id)arg1;
- (void)writeQALog:(id)arg1;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)startup;
- (void)handleOperation:(id)arg1;
- (id)statusAsDictionary;
- (void)enableTurboModeForManager:(id)arg1;
- (_Bool)turboIsEnabledForManager:(id)arg1;
- (void)disableTurboModeForManager:(id)arg1;
- (_Bool)_photoAnalysisEnabled;
- (_Bool)_photoAnalysCoreDuetSchedulingDisabled;
- (void)_backgroundActivityDidBegin;
- (void)addProcessingActivityToStatusDictionary:(id)arg1;
- (void)dumpStatusToLog;
- (id)managerForPhotoLibraryURL:(id)arg1;
- (void)terminateManagerForPhotoLibraryURL:(id)arg1;
- (_Bool)hasPhotosConnectionForManager:(id)arg1;
- (_Bool)hasConnectedClientsForManager:(id)arg1;
- (id)clientInfoForManager:(id)arg1;
- (void)removeClientHandler:(id)arg1;
- (void)terminateManagerIfQuiescentAndNoConnectedClients:(id)arg1;
- (void)dispatchAsyncToExecutiveStateQueue:(CDUnknownBlockType)arg1;
- (void)checkQuiescenceForManager:(id)arg1;
- (void)triggerBackgroundActivity;
- (void)stopBackgroundActivityForManager:(id)arg1;
- (void)stopAllBackgroundActivities;
- (void)_startBackgroundAnalysis;
- (void)_stopAllBackgroundAnalysisWithCompletion:(CDUnknownBlockType)arg1;
- (void)_installBackgroundAnalysisMonitor;
- (void)_registerCuratedLibraryActivity;
- (void)_registerBackgroundActivity;
- (void)_cleanupAfterBackgroundActivityFinishedForDefer:(_Bool)arg1 skipActivityStateCheck:(_Bool)arg2;
- (void)_runTurboProcessing:(id)arg1;
- (void)_registerTurboActivity;

@end
