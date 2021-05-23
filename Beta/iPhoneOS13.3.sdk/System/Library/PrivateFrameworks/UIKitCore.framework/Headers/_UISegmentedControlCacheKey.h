/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UISegmentedControlCacheKey : NSObject <Swift>

{
    double _size;
    unsigned long long _state;
    struct CGColor *_primaryColor;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCacheKey:(id)arg1;
- (id)initWithSize:(int)arg1 primaryColor:(struct CGColor *)arg2 background:(_Bool)arg3;
- (id)initWithCornerRadius:(double)arg1 state:(unsigned long long)arg2 primaryColor:(struct CGColor *)arg3;

@end
