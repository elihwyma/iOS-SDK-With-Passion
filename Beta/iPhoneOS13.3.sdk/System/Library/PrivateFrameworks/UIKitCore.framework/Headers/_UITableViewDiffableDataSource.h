/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UITableView;

@interface _UITableViewDiffableDataSource : _UIDiffableDataSourceSnapshotter

{
    long long _defaultRowAnimation;
}

@property (nonatomic) long long defaultRowAnimation;
@property (weak, nonatomic, readonly) UITableView *tableView;

- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;

@end
