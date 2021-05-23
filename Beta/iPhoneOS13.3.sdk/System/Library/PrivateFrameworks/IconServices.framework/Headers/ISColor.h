/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class CIColor;

__attribute__((visibility("hidden")))
@interface ISColor : NSObject

{
    struct CGColor *_cgColor;
}

@property (readonly) struct CGColor *cgColor;
@property (readonly) CIColor *ciColor;

+ (struct CGColorSpace *)deviceRGBColorSpace;
+ (id)black;
+ (struct CGColorSpace *)deviceGreyColorSpace;

- (void)dealloc;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;

@end
