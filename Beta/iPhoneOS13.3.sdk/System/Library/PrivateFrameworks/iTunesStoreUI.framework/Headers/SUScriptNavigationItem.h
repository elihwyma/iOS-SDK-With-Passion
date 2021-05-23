/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, UINavigationItem;

@protocol SUScriptNavigationItem;

@interface SUScriptNavigationItem : SUScriptObject

@property (nonatomic, readonly) UINavigationItem *nativeNavigationItem;
@property (copy) NSString *backButtonTitle;
@property (retain) NSString *prompt;
@property (retain) NSString *title;
@property (retain) id titleView;
@property id hidesBackButton;
@property id leftItemsSupplementBackButton;
@property (retain) id <SUScriptNavigationItem> leftItem;
@property (retain) id <SUScriptNavigationItem> leftMostItem;
@property (retain) id <SUScriptNavigationItem> rightItem;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)disconnectNavigationItem:(id)arg1 forScriptObject:(id)arg2;
+ (void)_disconnectNavigationItem:(id)arg1 scriptObject:(id)arg2;
+ (id)_rootScriptObjectForObject:(id)arg1;

- (id)init;
- (id)_className;
- (id)attributeKeys;
- (id)rightItems;
- (void)setRightItems:(id)arg1;
- (id)leftItems;
- (void)setLeftItems:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setTitleView:(id)arg1 animated:(_Bool)arg2;
- (void)tearDownUserInterface;
- (id)initWithNativeNavigationItem:(id)arg1;
- (void)setLeftItem:(id)arg1 animated:(_Bool)arg2;
- (void)setRightItem:(id)arg1 animated:(_Bool)arg2;
- (id)_copyScriptObjectForButtonItem:(id)arg1;
- (void)setLeftItems:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftMostItem:(id)arg1 animated:(_Bool)arg2;
- (void)setRightItems:(id)arg1 animated:(_Bool)arg2;
- (id)_copyScriptButtonForButtonItem:(id)arg1;

@end
