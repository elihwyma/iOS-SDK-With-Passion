/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKFormRotatingAccessoryPopover.h>

@class UITableViewController;

__attribute__((visibility("hidden")))
@interface WKSelectPopover : WKFormRotatingAccessoryPopover

{
    struct RetainPtr<WKSelectTableViewController> _tableViewController;
}

@property (nonatomic, readonly) UITableViewController *tableViewController;

- (void)dealloc;
- (id).cxx_construct;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)_userActionDismissedPopover:(id)arg1;
- (id)initWithView:(id)arg1 hasGroups:(_Bool)arg2;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;

@end
