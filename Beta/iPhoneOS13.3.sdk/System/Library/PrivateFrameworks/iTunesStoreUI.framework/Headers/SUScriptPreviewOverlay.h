/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptPreviewOverlay : SUScriptObject

@property (copy) id height;
@property (readonly, getter=isVisible) id visible;
@property (copy) id right;
@property (copy) id top;
@property (copy) NSString *userInfo;
@property (copy) id width;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (void)show:(id)arg1;
- (id)attributeKeys;
- (void)hide:(id)arg1;
- (id)scriptAttributeKeys;
- (void)loadURLRequest:(id)arg1;

@end
