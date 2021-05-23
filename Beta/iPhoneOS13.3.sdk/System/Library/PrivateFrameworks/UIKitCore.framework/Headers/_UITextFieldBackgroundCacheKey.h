/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextFieldBackgroundCacheKey : NSObject <Swift>

{
    NSString *_className;
    double _scale;
    double _cornerRadius;
    double _lineWidth;
    struct CGColor *_strokeColor;
    struct CGColor *_fillColor;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCacheKey:(id)arg1;
- (id)initWithClassName:(id)arg1 scale:(double)arg2 cornerRadius:(double)arg3 lineWidth:(double)arg4 strokeColor:(struct CGColor *)arg5 fillColor:(struct CGColor *)arg6;

@end
