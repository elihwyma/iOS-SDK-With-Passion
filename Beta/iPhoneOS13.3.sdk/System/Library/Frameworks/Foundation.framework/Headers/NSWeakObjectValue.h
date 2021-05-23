/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface NSWeakObjectValue : NSValue

{
    void *_value;
    id _object;
    _Bool _useFallback;
}

- (const char *)objCType;
- (void)dealloc;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;
- (void)getValue:(void *)arg1;
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;
- (_Bool)isEqualToValue:(id)arg1;
- (id)nonretainedObjectValue;
- (id)weakObjectValue;

@end
