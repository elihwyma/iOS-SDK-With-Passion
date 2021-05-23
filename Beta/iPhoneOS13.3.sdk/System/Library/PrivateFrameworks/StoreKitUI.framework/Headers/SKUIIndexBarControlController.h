/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, SKUIIndexBarControl, SKUIIndexBarEntryDescriptor, SKUIResourceLoader;

@protocol SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarControlController : NSObject

{
    SKUIIndexBarEntryDescriptor *_combinedEntryDescriptor;
    NSMapTable *_entryDescriptorToCachedEntry;
    _Bool _hasValidCombinedEntryDescriptor;
    NSMapTable *_indexPathToEntryDescriptor;
    NSMapTable *_requestIDToDescriptors;
    CDStruct_2ba00048 _dataSourceDelegateFlags;
    id <SKUIIndexBarControlControllerDataSource> _dataSource;
    id <SKUIIndexBarControlControllerDelegate> _delegate;
    SKUIIndexBarControl *_indexBarControl;
    SKUIResourceLoader *_resourceLoader;
}

@property (weak, nonatomic) id <SKUIIndexBarControlControllerDataSource> dataSource;
@property (weak, nonatomic) id <SKUIIndexBarControlControllerDelegate> delegate;
@property (nonatomic, readonly) SKUIIndexBarControl *indexBarControl;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reloadData;
- (void)reloadSections:(id)arg1;
- (id)initWithIndexBarControl:(id)arg1;
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;
- (void)_cancelLoadForEntryDescriptors:(id)arg1;
- (id)_combinedEntryDescriptor;
- (id)_entryForEntryDescriptor:(id)arg1 loadingIfNeeded:(_Bool)arg2;
- (id)_entryDescriptorAtIndexPath:(id)arg1;
- (void)_finishLoadForRequestID:(id)arg1 withResultingImage:(id)arg2;
- (id)_URLForEntryDescriptor:(id)arg1;
- (void)_configureEntry:(id)arg1 withEntryDescriptor:(id)arg2;
- (id)_cachedEntryForEntryDescriptor:(id)arg1;
- (id)_placeholderEntryForEntryDescriptor:(id)arg1;
- (void)_loadEntryForEntryDescriptor:(id)arg1;
- (void)_updateCachedEntry:(id)arg1 forEntryDescriptor:(id)arg2;
- (long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2;
- (id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2;
- (id)combinedEntryForIndexBarControl:(id)arg1;
- (long long)numberOfSectionsInIndexBarControl:(id)arg1;
- (void)indexBarControl:(id)arg1 didSelectEntryAtIndexPath:(id)arg2;
- (void)indexBarControlDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControlDidSelectBeyondTop:(id)arg1;
- (void)reloadCombinedEntryDescriptor;
- (void)reloadEntryDescriptorAtIndexPath:(id)arg1;

@end
