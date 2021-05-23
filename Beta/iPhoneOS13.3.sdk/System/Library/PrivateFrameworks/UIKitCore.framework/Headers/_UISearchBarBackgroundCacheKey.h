/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarBackgroundCacheKey : NSObject <Swift>

{
    long long _barPosition;
    _Bool _usesContiguousBarBackground;
    double _scale;
    double _alpha;
    double _height;
    double _statusBarHeight;
    struct CGColor *_backgroundColor;
    struct CGColor *_strokeColor;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCacheKey:(id)arg1;
- (id)initWithBarPosition:(long long)arg1 usesContiguousBarBackground:(_Bool)arg2 scale:(double)arg3 alpha:(double)arg4 height:(double)arg5 statusBarHeight:(double)arg6 backgroundColor:(struct CGColor *)arg7 strokeColor:(struct CGColor *)arg8;

@end
