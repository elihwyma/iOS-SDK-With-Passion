/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFocusUpdateContext.h>

@class NSIndexPath, UITableView;

@interface UITableViewFocusUpdateContext : UIFocusUpdateContext

{
    _Bool _didSetPreviouslyFocusedIndexPath;
    _Bool _didSetNextFocusedIndexPath;
    NSIndexPath *_previouslyFocusedIndexPath;
    NSIndexPath *_nextFocusedIndexPath;
    UITableView *_tableView;
}

@property (weak, nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) NSIndexPath *previouslyFocusedIndexPath;
@property (nonatomic, readonly) NSIndexPath *nextFocusedIndexPath;

+ (id)_contextWithContext:(id)arg1 tableView:(id)arg2;

- (id)_initWithContext:(id)arg1 tableView:(id)arg2;

@end
