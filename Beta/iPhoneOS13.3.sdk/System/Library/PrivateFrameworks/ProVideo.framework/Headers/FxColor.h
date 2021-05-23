/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@interface FxColor : NSObject <Swift>

{
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithString:(id)arg1;
+ (id)colorWithCIColor:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (const double *)components;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (double)red;
- (double)green;
- (double)blue;
- (double)alpha;
- (unsigned long long)numberOfComponents;
- (struct CGColorSpace *)colorSpace;
- (id)stringRepresentation;
- (struct CGColor *)_cgColor;
- (id)ciColor;
- (void)convertToRGBA:(double *)arg1;

@end
