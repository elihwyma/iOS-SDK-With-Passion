/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CIColor : NSObject

{
    void *_priv;
    void *_pad[3];
}

@property (readonly) unsigned long long numberOfComponents;
@property (readonly) const double *components;
@property (readonly) double alpha;
@property (readonly) struct CGColorSpace *colorSpace;
@property (readonly) double red;
@property (readonly) double green;
@property (readonly) double blue;
@property (readonly) NSString *stringRepresentation;

+ (_Bool)supportsSecureCoding;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace *)arg5;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)colorWithString:(id)arg1;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)grayColor;
+ (id)redColor;
+ (id)greenColor;
+ (id)blueColor;
+ (id)cyanColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)clearColor;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (struct CGColor *)cgColor;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (id)debugQuickLookObject;

@end
