/*
 Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface CTFeatureSetting : NSDictionary

{
    NSDictionary *_dictionary;
}

- (void)dealloc;
- (id)selector;
- (unsigned long long)count;
- (id)type;
- (id)objectForKey:(id)arg1;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)initWithDictionary:(id)arg1;
- (id)value;
- (id)tag;
- (id)initWithType:(id)arg1 selector:(id)arg2 tag:(id)arg3 value:(id)arg4;
- (id)initWithNormalizedDictionary:(id)arg1;
- (_Bool)isEqualToFeatureSetting:(id)arg1;

@end
