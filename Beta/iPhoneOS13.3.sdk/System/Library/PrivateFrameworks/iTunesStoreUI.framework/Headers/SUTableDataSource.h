/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class ISURLOperationPool, NSArray, SUImageCache, SUVariableCellConfigurationCache;

@interface SUTableDataSource : NSObject

{
    id _cellReuseSource;
    long long _columnCount;
    SUVariableCellConfigurationCache *_configurationCache;
    long long _preferringUserInteractionCount;
}

@property (nonatomic) id cellReuseSource;
@property (nonatomic, readonly) SUImageCache *imageCache;
@property (nonatomic, readonly) ISURLOperationPool *imagePool;
@property (nonatomic, readonly) long long tableViewStyle;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic) long long columnCount;
@property (nonatomic, readonly) NSArray *sectionIndexTitles;
@property (nonatomic, readonly, getter=isPreferringUserInteraction) _Bool preferringUserInteraction;

- (id)init;
- (void)dealloc;
- (void)reloadData;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (double)heightForFooterInSection:(long long)arg1;
- (id)headerViewForSection:(long long)arg1;
- (void)resetCaches;
- (id)cellForIndexPath:(id)arg1;
- (_Bool)deleteIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)resetLayoutCaches;
- (void)endPreferringUserInteraction;
- (void)beginPreferringUserInteraction;
- (id)placeholderCellForIndexPath:(id)arg1;
- (long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (_Bool)canDoubleTapIndexPath:(id)arg1;
- (_Bool)canDeleteIndexPath:(id)arg1;
- (double)heightForPlaceholderCells;
- (double)cellHeightForIndexPath:(id)arg1;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;
- (_Bool)canSelectIndexPath:(id)arg1;
- (void)didBeginPreferringUserInteraction;
- (void)didEndPreferringUserInteraction;
- (void)reloadCellContexts;
- (id)cachedConfigurationForClass:(Class)arg1 index:(long long)arg2;
- (id)cellContextForConfigurationClass:(Class)arg1;
- (long long)numberOfColumnsInSection:(long long)arg1;

@end
