/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@class UITableView;

@interface OBTableWelcomeController

{
    UITableView *_tableView;
}

@property (retain, nonatomic) UITableView *tableView;

- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (void)_updateDirectionalLayoutMarginsForTableView;
- (void)updateDirectionalLayoutMargins;

@end
