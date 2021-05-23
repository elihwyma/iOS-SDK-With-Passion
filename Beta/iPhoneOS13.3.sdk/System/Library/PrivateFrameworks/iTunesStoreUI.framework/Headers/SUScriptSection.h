/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptViewController;

@interface SUScriptSection : SUScriptObject

{
    NSString *_badgeValue;
    NSString *_identifier;
    _Bool _transient;
    SUScriptViewController *_viewController;
}

@property (retain) NSString *badgeValue;
@property (readonly) NSString *identifier;
@property (readonly) _Bool transient;
@property (readonly) SUScriptViewController *viewController;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)setBadgeValue:(id)arg1 animated:(_Bool)arg2 blink:(_Bool)arg3;
- (id)initWithNativeSection:(id)arg1;

@end
