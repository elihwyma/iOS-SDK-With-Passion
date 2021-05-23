/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptStorePageViewController.h>

@class NSString;

@interface SUScriptAccountPageViewController : SUScriptStorePageViewController

@property (retain) NSString *style;
@property (readonly) NSString *styleNameDefault;
@property (readonly) NSString *styleNameSignUp;
@property (readonly) NSString *styleNameViewAccount;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;

@end
