/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableView.h>

@class UIMoreListController;

__attribute__((visibility("hidden")))
@interface _UIMoreListTableView : UITableView

{
    UIMoreListController *__listController;
}

@property (weak, nonatomic) UIMoreListController *_listController;

- (void)didMoveToWindow;

@end
