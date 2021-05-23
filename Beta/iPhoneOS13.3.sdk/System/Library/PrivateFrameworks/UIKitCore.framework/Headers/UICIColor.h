/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIColor.h>

@class CIColor;

__attribute__((visibility("hidden")))
@interface UICIColor : UIColor

{
    CIColor *_ciColor;
    UIColor *_rgbColor;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)set;
- (struct CGColor *)CGColor;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)setStroke;
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;
- (void)setFill;
- (id)_rgbColor;
- (id)initWithCIColor:(id)arg1;
- (id)CIColor;

@end
