/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICGColor.h>

__attribute__((visibility("hidden")))
@interface UIPatternCGColor : UICGColor

{
    struct CGColor *_cachedUnflippedColor;
}

- (void)dealloc;
- (id)description;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (id)colorSpaceName;
- (_Bool)isPatternColor;

@end
