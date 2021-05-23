/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIWebFormDelegateEditedFormsMap : NSObject

{
    NSMutableDictionary *_map;
    NSMutableArray *_lifetimeHelper;
}

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)allValues;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)_keyForWebFrame:(id)arg1;

@end
