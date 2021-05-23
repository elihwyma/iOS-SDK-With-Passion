/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLEngineLibrary, CPLNetworkWatcher, NSMutableDictionary, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface CPLEngineSystemMonitor : NSObject

{
    _Bool _closed;
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_queue;
    CPLNetworkWatcher *_watcher;
    _Bool _modifyingBudgetOverride;
    unsigned long long _newBudgetsToOverride;
    unsigned long long _newBudgetsToStopOverriding;
    NSMutableDictionary *_reasonsToOverrideSystemBudget;
    NSMutableDictionary *_scheduledOverrides;
    _Bool _overrideDataSystemBudgetPermanently;
    _Bool _allowOperationsBoost;
    _Bool _allowBackgroundOperationsBoost;
    CPLEngineLibrary *_engineLibrary;
}

@property (weak, nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long diskPressureState;
@property (readonly) unsigned long long freeDiskSpaceSize;
@property (readonly) _Bool isNetworkConnected;
@property (readonly) _Bool isNetworkConstrained;
@property (readonly) _Bool isOnCellularOrUnknown;
@property (readonly) _Bool isDataBudgetOverriden;
@property (readonly) _Bool canBoostOperations;
@property (readonly) _Bool canBoostBackgroundOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)enumerateSystemBudgets:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)descriptionForBudget:(unsigned long long)arg1;
+ (id)descriptionForBudgets:(unsigned long long)arg1;

- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEngineLibrary:(id)arg1;
- (void)scheduledOverrideDidEnd:(id)arg1;
- (void)watcher:(id)arg1 stateDidChangeToNetworkState:(id)arg2;
- (void)updateDiskPressureState;
- (void)_startOverridingBudget:(unsigned long long)arg1 reason:(id)arg2;
- (void)_stopOverridingBudget:(unsigned long long)arg1 reason:(id)arg2;
- (void)_withSystemBudgetOverride:(CDUnknownBlockType)arg1;
- (void)startOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2;
- (void)stopOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2;
- (void)startOverridingSystemBudgetsForClient:(unsigned long long)arg1;
- (void)stopOverridingSystemBudgetsForClient:(unsigned long long)arg1;
- (_Bool)_hasPermanentDataOverride;
- (void)_permanentDataOverrideHasChanged;
- (void)_startWatchingPermanentDataOverride;
- (void)_stopWatchingPermanentDataOverride;

@end
