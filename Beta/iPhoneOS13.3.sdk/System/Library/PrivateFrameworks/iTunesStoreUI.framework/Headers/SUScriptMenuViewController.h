/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSNumber, NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptMenuViewController : SUScriptViewController

{
    SUScriptFunction *_action;
}

@property (retain) WebScriptObject *action;
@property (retain) id items;
@property (retain) NSNumber *selectedIndex;
@property (retain) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)_viewController;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (id)itemWithTitle:(id)arg1 userInfo:(id)arg2;

@end
