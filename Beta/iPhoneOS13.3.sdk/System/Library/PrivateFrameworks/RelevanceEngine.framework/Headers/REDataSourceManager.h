/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet, REConcurrentDictionary, REDataSourceLoader;

@protocol REDataSourceManagerObserver;

@interface REDataSourceManager : RERelevanceEngineSubsystem

{
    NSMutableArray *_dataSourceControllers;
    unsigned long long _dataSourceState;
    _Bool _locationAllowed;
    NSSet *_disabledDataSources;
    NSDictionary *_identifierDataSourceMap;
    NSDictionary *_identifierApplicationIdentifierMap;
    NSDictionary *_identifierOperatingSystemVersionMap;
    NSDictionary *_unmanagedDataSourcesMap;
    NSSet *_elementGroupSupportingConfigurations;
    REConcurrentDictionary *_elementGroupMap;
    _Bool _ignoreAppInstallation;
    _Bool _completedFirstElementLoad;
    REDataSourceLoader *_loader;
    NSSet *_availableDataSourceIdentifiers;
    NSSet *_currentDataSourceIdentifiers;
    NSArray *_currentDataSources;
    id <REDataSourceManagerObserver> _delegate;
}

@property (retain) NSSet *availableDataSourceIdentifiers;
@property (retain) NSSet *currentDataSourceIdentifiers;
@property (retain) NSArray *currentDataSources;
@property (nonatomic, readonly) REDataSourceLoader *loader;
@property (nonatomic, readonly) NSSet *unrestirctedDataSourceIdentifiers;
@property (weak, nonatomic, readonly) id <REDataSourceManagerObserver> delegate;
@property (nonatomic, readonly, getter=hasCompletedFirstElementLoad) _Bool completedFirstElementLoad;
@property (nonatomic, readonly) NSSet *disabledDataSources;
@property (nonatomic, readonly) NSArray *dataSourceControllers;

+ (id)_prioritizedDataSourceClasses;
+ (_Bool)_isPrioritizedDataSourceClass:(Class)arg1;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)_updatePreferences;
- (void)enumerateElementDataSourceControllers:(CDUnknownBlockType)arg1;
- (id)initWithRelevanceEngine:(id)arg1 dataSourceLoader:(id)arg2 withDelegate:(id)arg3;
- (Class)classForDataSourceIdentifier:(id)arg1;
- (CDStruct_2ec95fd7)minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1;
- (id)elementGroupForIdentifier:(id)arg1;
- (void)_handleApplicationStateChange;
- (void)_queue_availableDataSourcesDidChange;
- (_Bool)_isApplicationRemovedOrRestrictedForIdentifier:(id)arg1;
- (void)_queue_updateAvailableDataSourceIdentifiers;
- (void)_queue_unloadDataSourceWithIdentifier:(id)arg1;
- (void)_queue_loadDataSourceWithIdentifier:(id)arg1;

@end
