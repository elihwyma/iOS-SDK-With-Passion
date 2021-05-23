/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSKeyValueStore;

@interface SUScriptKeyValueStore : SUScriptObject

{
    NSString *_domain;
    SSKeyValueStore *_keyValueStore;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)_checkOutStoreWithDomain:(id)arg1;
+ (void)_popStoreWithDomain:(id)arg1;

- (void)dealloc;
- (id)valueForKey:(id)arg1;
- (id)_className;
- (id)initWithDomain:(id)arg1;
- (void)removeAllValues;
- (void)getValueForKey:(id)arg1 usingFunction:(id)arg2;
- (void)removeValueForKey:(id)arg1;
- (void)setValueForKey:(id)arg1 value:(id)arg2;

@end
