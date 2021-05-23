/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKRing : NSObject

{
    double _fillFraction;
    double _strokeWidth;
    double _backgroundRingAlpha;
    double _radius;
    long long _ringStyle;
}

@property double fillFraction;
@property double strokeWidth;
@property double backgroundRingAlpha;
@property double radius;
@property long long ringStyle;

+ (id)fillFractionStringForFillFraction:(float)arg1;
+ (id)fillFractionStringWithSymbolForFillFraction:(float)arg1;
+ (id)_fillFractionStringForFillFraction:(float)arg1 withFormatter:(id)arg2;

- (id)init;
- (id)initWithFillFraction:(double)arg1 style:(long long)arg2;
- (id)ringImage;
- (id)initWithFillFraction:(double)arg1 style:(long long)arg2 radius:(double)arg3 strokeWidth:(double)arg4;
- (double)_validFillFraction:(double)arg1;
- (void)fillFraction:(double)arg1;
- (id)fillFractionString;
- (id)fillFractionStringWithSymbol;

@end
