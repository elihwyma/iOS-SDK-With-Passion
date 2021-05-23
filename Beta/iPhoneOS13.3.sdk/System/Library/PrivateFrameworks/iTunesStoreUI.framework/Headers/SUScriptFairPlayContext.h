/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@interface SUScriptFairPlayContext : SUScriptObject

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)close;
- (_Bool)isOpen;
- (id)_className;
- (id)_accountViewController;
- (id)signData:(id)arg1;

@end
