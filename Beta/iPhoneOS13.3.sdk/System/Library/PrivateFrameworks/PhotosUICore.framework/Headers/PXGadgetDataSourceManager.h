/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSObject, NSString, PXGadgetDataSource, PXGadgetNavigationHelper;

@protocol OS_dispatch_queue, OS_os_log, PXGadgetDelegate, PXGadgetTransition;

@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <Swift>

{
    _Bool _hasLoadedPriorities;
    _Bool _loadingInitialGadgets;
    _Bool _needsToLoadAllProviders;
    id <PXGadgetDelegate> _nextGadgetResponder;
    NSArray *_cachedProviders;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSMutableArray *_lookupQueue_loadedProviders;
}

@property (copy, nonatomic) NSArray *cachedProviders;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue;
@property (retain, nonatomic) NSMutableArray *lookupQueue_loadedProviders;
@property (nonatomic) _Bool hasLoadedPriorities;
@property (nonatomic) _Bool loadingInitialGadgets;
@property (nonatomic) _Bool needsToLoadAllProviders;
@property (nonatomic, readonly) NSObject<OS_os_log> *gadgetDataSourceManagerLog;
@property (nonatomic, readonly) NSArray *gadgetProviders;
@property (nonatomic, readonly) CDUnknownBlockType gadgetSortComparator;
@property (nonatomic, readonly) CDUnknownBlockType gadgetProviderSortComparator;
@property (nonatomic, readonly) PXGadgetDataSource *dataSource;
@property (weak, nonatomic) id <PXGadgetDelegate> nextGadgetResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <PXGadgetTransition> gadgetTransition;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;

- (id)init;
- (id)_dataSourceSnapshot;
- (id)initWithQueueName:(id)arg1;
- (id)createInitialDataSource;
- (struct NSObject *)gadgetViewControllerHostingGadget:(id)arg1;
- (void)gadget:(id)arg1 animateChanges:(CDUnknownBlockType)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (_Bool)gadget:(id)arg1 transitionToViewController:(struct NSObject *)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateDataSource;
- (void)removeCachedProviders;
- (void)invalidateGadgets;
- (void)didLoadDataForPriorities;
- (id)filteredUndisplayedGadgets:(id)arg1;
- (id)noContentGadget;
- (void)beginLoadingInitialGadgets:(unsigned long long)arg1;
- (void)loadRemainingGadgetsIfNeeded;
- (void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(CDUnknownBlockType)arg1;
- (id)allGadgets;
- (void)_loadPriorityForProviders:(id)arg1;
- (void)_loadDataFromProviders:(id)arg1 withGadgetMinimum:(unsigned long long)arg2;
- (id)_sortedGadgets;

@end
