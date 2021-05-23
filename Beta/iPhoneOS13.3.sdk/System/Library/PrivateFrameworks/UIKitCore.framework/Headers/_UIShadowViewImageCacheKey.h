/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIShadowViewImageCacheKey : NSObject <Swift>

{
    double _scale;
    double _size;
    unsigned long long _options;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCacheKey:(id)arg1;
- (id)initWithSize:(double)arg1 scale:(double)arg2 options:(unsigned long long)arg3;

@end
