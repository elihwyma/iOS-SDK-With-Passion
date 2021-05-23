/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <SUStructuredPageGroupedTableDataSource.h>

@interface MSStructuredPageTableDataSource : SUStructuredPageGroupedTableDataSource

- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (_Bool)canDoubleTapIndexPath:(id)arg1;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id *)arg2;
- (_Bool)canShowPreviewForItem:(id)arg1;

@end
