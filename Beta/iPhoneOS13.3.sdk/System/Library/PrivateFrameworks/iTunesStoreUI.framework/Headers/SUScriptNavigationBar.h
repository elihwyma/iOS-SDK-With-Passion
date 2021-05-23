/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptButton, SUScriptNavigationItem;

@protocol SUScriptNavigationItem;

@interface SUScriptNavigationBar : SUScriptObject

@property (readonly) SUScriptNavigationItem *backNavigationItem;
@property long long barStyle;
@property (readonly) NSArray *navigationItems;
@property (copy) id translucent;
@property (readonly) SUScriptNavigationItem *topNavigationItem;
@property (readonly) long long barStyleBlack;
@property (readonly) long long barStyleDefault;
@property (retain) SUScriptButton *leftButton;
@property (retain) id <SUScriptNavigationItem> leftItem;
@property (retain) NSString *prompt;
@property (retain) SUScriptButton *rightButton;
@property (retain) id <SUScriptNavigationItem> rightItem;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (id)_className;
- (void)setNavigationItems:(id)arg1;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)setLeftButton:(id)arg1 animated:(_Bool)arg2;
- (void)setRightButton:(id)arg1 animated:(_Bool)arg2;
- (id)initWithNativeNavigationBar:(id)arg1;
- (id)_nativeNavigationBar;
- (void)tearDownUserInterface;
- (id)_topNavigationItem;
- (void)setLeftItem:(id)arg1 animated:(_Bool)arg2;
- (void)setRightItem:(id)arg1 animated:(_Bool)arg2;
- (id)_copyTopNavigationItem;
- (id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4;
- (void)setBackNavigationItem:(id)arg1;
- (void)setTopNavigationItem:(id)arg1;

@end
