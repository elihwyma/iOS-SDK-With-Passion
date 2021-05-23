/*
 Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CCSModuleSettingsProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_source> *_configurationChangedSource;
    NSHashTable *_observers;
    NSArray *_orderedFixedModuleIdentifiers;
    NSArray *_orderedUserEnabledModuleIdentifiers;
    NSArray *_userDisabledModuleIdentifiers;
}

@property (copy, nonatomic, readonly) NSArray *orderedFixedModuleIdentifiers;
@property (copy, nonatomic, readonly) NSArray *orderedUserEnabledModuleIdentifiers;
@property (copy, nonatomic, readonly) NSArray *userDisabledModuleIdentifiers;

+ (void)initialize;
+ (id)sharedProvider;
+ (id)_configurationFileURL;
+ (id)_defaultFixedModuleIdentifiers;
+ (id)_configurationDirectoryURL;
+ (id)_readSettings;
+ (id)_defaultUserEnabledModuleIdentifiers;
+ (void)_writeOrderedIdentifiers:(id)arg1 userDisabledIdentifiers:(id)arg2;
+ (id)_defaultEnabledModuleOrder;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg1;
- (void)_queue_loadSettings;
- (void)_queue_startMonitoringConfigurationUpdates;
- (void)_queue_stopMonitoringConfigurationUpdates;
- (void)_queue_saveSettings;
- (void)_queue_sendConfigurationFileUpdateMessageToObservers;
- (void)_queue_handleConfigurationFileUpdate;
- (void)_queue_runBlockOnListeners:(CDUnknownBlockType)arg1;

@end
