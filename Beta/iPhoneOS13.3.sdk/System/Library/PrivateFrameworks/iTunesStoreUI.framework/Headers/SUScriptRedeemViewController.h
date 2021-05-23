/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSString;

@interface SUScriptRedeemViewController : SUScriptViewController

{
    long long _category;
    NSString *_initialCode;
}

@property (copy, nonatomic) NSString *initialCode;
@property (nonatomic, readonly) long long redeemCategoryApps;
@property (nonatomic, readonly) long long redeemCategoryBooks;
@property (nonatomic, readonly) long long redeemCategoryMedia;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (void)setRedeemStyle:(long long)arg1;

@end
