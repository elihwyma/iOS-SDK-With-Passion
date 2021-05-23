/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface SUScriptDictionary : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_stringKeys;
    NSMutableDictionary *_cachedNestedScriptDictionaries;
    NSDictionary *_dictionary;
}

@property (readonly) NSDictionary *dictionary;

+ (void)initialize;
+ (_Bool)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (_Bool)isKeyExcludedFromWebScript:(const char *)arg1;

- (id)init;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)stringRepresentation;
- (id)attributeKeys;
- (id)valueForNotNativelySupportedKey:(id)arg1;

@end
