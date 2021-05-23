/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol _UIActivityUserDefaultsDataSourceProxy;

@interface _UIActivityUserDefaultsDataSource : UITableViewDiffableDataSource

{
    id <_UIActivityUserDefaultsDataSourceProxy> _dataSourceProxy;
}

@property (weak, nonatomic) id <_UIActivityUserDefaultsDataSourceProxy> dataSourceProxy;

- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@end
