/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKJSObject.h>

@class MPUQueryDataSource, NSObject, NSOperationQueue, NSString, VUIOrderedItemsMap;

@protocol OS_dispatch_queue;

@interface VUIJSMediaPlayer : IKJSObject

{
    NSOperationQueue *_artworkLoadingQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workQueue;
    MPUQueryDataSource *_queryDataSource;
    VUIOrderedItemsMap *_orderedItemsMap;
    NSOperationQueue *_fetchOperationQueue;
    NSOperationQueue *_fetchCompletionOperationQueue;
}

@property (retain, nonatomic) MPUQueryDataSource *queryDataSource;
@property (retain, nonatomic) VUIOrderedItemsMap *orderedItemsMap;
@property (retain, nonatomic) NSOperationQueue *fetchOperationQueue;
@property (retain, nonatomic) NSOperationQueue *fetchCompletionOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_logObject;
- (_Bool)setFilter:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (id)getItems;
- (long long)_dataSourceType;
- (id)_mediaItemForIdentifier:(id)arg1;
- (id)_numberForString:(id)arg1;
- (id)_stringForNumber:(id)arg1;
- (void)_onIsUpdateInProgressChangedNotification:(id)arg1;
- (void)_onSyncGenerationChangedNotification:(id)arg1;
- (void)_mediaLibraryChanged:(id)arg1;
- (void)_dataSourceWillChange;
- (void)_dataSourceChanged:(id)arg1;
- (void)_dataSourceDidChange;
- (id)_getItem:(id)arg1 includeChildren:(_Bool)arg2 additionalProperties:(id)arg3;
- (id)_dataSourceForConfigurationOptions:(id)arg1;
- (id)_dateFromConfigurationObject:(id)arg1;
- (id)_identifierForMediaItem:(id)arg1 withProperty:(id)arg2;
- (void)itemsMapAddedKeys:(id)arg1 andRemovedKeys:(id)arg2;
- (id)findItemByPersistentIdentifier:(id)arg1:(id)arg2;
- (id)findItemByStoreIdentifier:(id)arg1:(id)arg2;
- (_Bool)getIsUpdateInProgress;
- (_Bool)getIsInitialImport;
- (void)getImageForItem:(id)arg1:(id)arg2:(id)arg3;
- (id)getItem:(id)arg1:(id)arg2;
- (unsigned long long)getItemCount;
- (id)getShowIdentifierForStoreIdentifier:(id)arg1;
- (id)getItemWithChildren:(id)arg1:(id)arg2;
- (void)getUpdateProgress:(id)arg1;
- (_Bool)libraryHasMedia;
- (void)setFilterAsync:(id)arg1:(id)arg2;
- (long long)queryHasItemCount:(id)arg1;
- (void)fetchMediaEntitiesWithOptions:(id)arg1:(id)arg2;
- (_Bool)isHDRCapable;

@end
