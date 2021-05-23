/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, UITableView;

__attribute__((visibility("hidden")))
@interface _UITableViewDragItemContext : NSObject

{
    UITableView *_tableView;
    NSIndexPath *_indexPath;
}

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (id)initWithIndexPath:(id)arg1 forTableView:(id)arg2;

@end
