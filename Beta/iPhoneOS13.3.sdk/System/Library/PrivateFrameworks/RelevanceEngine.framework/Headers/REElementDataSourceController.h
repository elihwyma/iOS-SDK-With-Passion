/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, REElementDataSource, RERelevanceEngine, RERelevanceProviderEnvironment, REUpNextScheduler;

@protocol OS_dispatch_queue, REElementDataSourceControllerDelegate;

@interface REElementDataSourceController : NSObject

{
    NSString *_loggingHeader;
    NSMutableSet *_dataSourceElements;
    NSMutableDictionary *_dataSourceElementSectionMap;
    NSMutableDictionary *_dataSourceElementIdentifierMap;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_updates;
    REUpNextScheduler *_updateScheduler;
    REUpNextScheduler *_reloadScheduler;
    _Bool _wantsReloadWhilePaused;
    _Bool _hasDataAvailable;
    unsigned long long _contentMode;
    _Bool _isPerformingReload;
    NSMutableArray *_enqueuedBlocks;
    NSSet *_supportedSections;
    RERelevanceProviderEnvironment *_providerEnvironment;
    RERelevanceEngine *_relevanceEngine;
    _Bool _willUnload;
    _Bool _allowsLocationUse;
    _Bool _supportsContentRelevance;
    NSArray *_contentAttributes;
    int _boostCount;
    Class _dataSourceClass;
    REElementDataSource *_dataSource;
    unsigned long long _state;
    id <REElementDataSourceControllerDelegate> _delegate;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) Class dataSourceClass;
@property (nonatomic, readonly) NSArray *supportedSections;
@property (nonatomic, readonly) NSArray *allProvidedElements;
@property (nonatomic, readonly) _Bool allowsLocationUse;
@property (nonatomic, readonly) _Bool hasDataAvailable;
@property (nonatomic, readonly) unsigned long long updateCount;
@property (weak, nonatomic) id <REElementDataSourceControllerDelegate> delegate;
@property (nonatomic, readonly) Class dataSourceClass;
@property (nonatomic, readonly) REElementDataSource *dataSource;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) _Bool hasLoadedData;
@property (nonatomic, readonly) NSArray *allElements;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)_queue_resume;
- (void)_loadLoggingHeader;
- (void)setAllowsLocationUse:(_Bool)arg1;
- (id)_initWithRelevanceEngine:(id)arg1 dataSourceClass:(Class)arg2 dataSource:(id)arg3;
- (void)_queue_performUpdates;
- (void)_queue_reloadWithQOS:(unsigned int)arg1 qosOffset:(int)arg2 forceReload:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleSignifiantTimeChange:(id)arg1;
- (void)_handleDeviceLockStateChange:(id)arg1;
- (void)invalidateElements;
- (_Bool)_validElement:(id)arg1;
- (_Bool)_supportsContentRelevanceProviderForElement:(id)arg1;
- (void)_performOrEnqueueUpdateBlock:(CDUnknownBlockType)arg1;
- (void)_queue_updateDataSourceLocationUse;
- (void)_queue_pause;
- (id)_elementsByRemovingInvalidElements:(id)arg1;
- (id)_updateRelevanceProvidersForElement:(id)arg1;
- (_Bool)_containsElementIdentifier:(id)arg1;
- (void)_addElementIdentifier:(id)arg1;
- (void)_setSection:(id)arg1 forElementWithIdentifier:(id)arg2;
- (void)_storeElement:(id)arg1;
- (void)_namespaceElementIdentifier:(id)arg1 section:(id)arg2;
- (void)_queue_scheduleUpdate:(id)arg1;
- (id)_sectionForElementWithIdentifier:(id)arg1;
- (id)_elementForIdentifier:(id)arg1;
- (id)_allDataSourceElements;
- (void)_removeElementIdentifier:(id)arg1;
- (id)_dataSourceIdentifierFromIdentifier:(id)arg1;
- (void)_removeElementForIdentifier:(id)arg1;
- (id)_shallowCopiedElements:(id)arg1;
- (id)_groupElements:(id)arg1 bySections:(id)arg2;
- (id)_queue_elementsForIds:(id)arg1;
- (void)_queue_processUpdates:(id)arg1 forSection:(id)arg2;
- (id)elementOperationQueue;
- (void)addElements:(id)arg1 toSectionWithIdentifier:(id)arg2;
- (void)reloadElement:(id)arg1;
- (void)removeElementsWithIds:(id)arg1;
- (void)refreshElement:(id)arg1;
- (_Bool)hasElementWithId:(id)arg1 inSectionWithIdentifier:(id)arg2;
- (void)fetchElementWithIdentifierVisible:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)addElements:(id)arg1 toSection:(unsigned long long)arg2;
- (void)removeElements:(id)arg1 fromSection:(unsigned long long)arg2;
- (_Bool)hasElementWithId:(id)arg1 inSection:(unsigned long long)arg2;
- (id)initWithRelevanceEngine:(id)arg1 dataSource:(id)arg2;
- (id)initWithRelevanceEngine:(id)arg1 dataSourceClass:(Class)arg2;
- (void)pauseIfNeeded;
- (void)prepareToUnload;
- (void)invalidateAndReloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)elementWillBecomeVisible:(id)arg1;
- (void)elementDidBecomeHidden:(id)arg1;

@end
