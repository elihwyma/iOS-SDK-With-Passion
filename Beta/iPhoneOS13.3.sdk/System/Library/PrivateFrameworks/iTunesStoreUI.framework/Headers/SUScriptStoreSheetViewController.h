/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@interface SUScriptStoreSheetViewController : SUScriptViewController

@property long long productPageStyle;
@property (readonly) long long productPageStyleAutomatic;
@property (readonly) long long productPageStylePad;
@property (readonly) long long productPageStylePhone;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)loadWithProductParameters:(id)arg1;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (void)loadWithProductURL:(id)arg1;

@end
