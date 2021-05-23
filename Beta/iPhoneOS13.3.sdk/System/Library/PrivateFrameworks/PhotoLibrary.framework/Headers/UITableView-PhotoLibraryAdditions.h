/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UITableView.h>

@interface UITableView (PhotoLibraryAdditions)

- (id)pl_indexPathForLastRow;
- (void)pl_scrollToBottom:(_Bool)arg1;
- (void)pl_resetContentOffsetFromContentInsets;
- (void)pl_scrollToVisibleRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)pl_scrollToTop:(_Bool)arg1;
- (_Bool)pl_lastRowIsVisible;

@end
