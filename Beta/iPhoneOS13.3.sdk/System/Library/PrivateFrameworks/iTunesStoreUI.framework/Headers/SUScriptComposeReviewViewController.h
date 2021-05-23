/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptReview;

@interface SUScriptComposeReviewViewController : SUScriptViewController

@property (readonly) SUScriptReview *review;

+ (id)webScriptNameForKey:(const char *)arg1;

- (id)init;
- (id)_className;
- (id)attributeKeys;
- (void)setReview:(id)arg1;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (id)initWithScriptReview:(id)arg1 clientInterface:(id)arg2;

@end
