/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class SBDockIconListView, SBFloatingDockViewController;

@protocol SBFloatingDockSuggestionsViewProviding <Swift>

@property (weak, nonatomic) SBFloatingDockViewController *floatingDockViewController;
@property (nonatomic, readonly) SBDockIconListView *listView;

- (unsigned short)dockViewWillBecomeVisible;
- (unsigned short)dockViewWillResignVisible;
- (unsigned short)dockViewDidResignVisible;
- (unsigned short)dockViewDidBecomeVisible;
- (unsigned short)dockFolderWillBeginTransitioning;
- (unsigned short)dockFolderDidEndTransitioning;

@end
