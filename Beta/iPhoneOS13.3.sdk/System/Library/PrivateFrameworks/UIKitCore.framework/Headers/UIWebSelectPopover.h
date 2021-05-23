/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWebFormRotatingAccessoryPopover.h>

@class UIWebSelectTableViewController;

__attribute__((visibility("hidden")))
@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover

{
    UIWebSelectTableViewController *_tableViewController;
}

@property (retain, nonatomic) UIWebSelectTableViewController *_tableViewController;

- (void)dealloc;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(_Bool)arg5;
- (void)_userActionDismissedPopover:(id)arg1;

@end
