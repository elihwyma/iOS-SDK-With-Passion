/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMapTable, UITableView, UITableViewCell;

@protocol _UITableViewSubviewManagerDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewSubviewManager : NSObject

{
    UITableViewCell *_reorderingCell;
    UITableView<_UITableViewSubviewManagerDelegate> *_tableView;
    NSCountedSet *_reusePreventedCells;
    NSMapTable *_cellsReadyForReuse;
}

@property (weak, nonatomic) UITableView<_UITableViewSubviewManagerDelegate> *tableView;
@property (retain, nonatomic) NSCountedSet *reusePreventedCells;
@property (retain, nonatomic) NSMapTable *cellsReadyForReuse;
@property (retain, nonatomic) UITableViewCell *reorderingCell;

- (id)initWithTableView:(id)arg1;
- (_Bool)shouldDeferReuseOfCell:(id)arg1;
- (void)cellReadyForReuse:(id)arg1 withIndexPath:(id)arg2 didEndDisplaying:(_Bool)arg3;
- (void)preventReuseOfCell:(id)arg1;
- (void)resumeReuseOfCell:(id)arg1;

@end
