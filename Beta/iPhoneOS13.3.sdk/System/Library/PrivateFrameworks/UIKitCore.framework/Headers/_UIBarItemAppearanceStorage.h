/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIBarItemAppearanceStorage : NSObject

{
    NSMutableDictionary *textAttributesForState;
}

- (id)textAttributesForState:(unsigned long long)arg1;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTextAttribute:(id)arg1 forKey:(id)arg2 state:(unsigned long long)arg3;
- (id)textAttributeForKey:(id)arg1 state:(unsigned long long)arg2;
- (void)enumerateTextAttributesWithBlock:(CDUnknownBlockType)arg1;

@end
