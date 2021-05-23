/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorViewArtworkCacheKey : NSObject <Swift>

{
    long long _style;
    double _width;
    long long _spokeCount;
    long long _spokeFrameRatio;
    struct CGSize _shadowOffset;
    struct CGColor *_color;
    struct CGColor *_shadowColor;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCacheKey:(id)arg1;
- (id)initWithStyle:(long long)arg1 width:(double)arg2 spokeCount:(long long)arg3 spokeFrameRatio:(long long)arg4 shadowOffset:(struct CGSize)arg5 color:(struct CGColor *)arg6 shadowColor:(struct CGColor *)arg7;

@end
