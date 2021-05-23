/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

#import <CoreUI/Swift-Protocol.h>

@class NSArray;

@interface CUIPSDGradientEvaluator : NSObject <Swift>

{
    NSArray *colorStops;
    NSArray *colorMidpointLocations;
    NSArray *opacityStops;
    NSArray *opacityMidpointLocations;
    double smoothingCoefficient;
    struct _psdGradientColor fillColor;
    int blendMode;
    struct {
        unsigned int colorEdgePixel:2;
        unsigned int opacityEdgePixel:2;
        unsigned int isDithered:1;
        unsigned int reserved:3;
    } pgeFlags;
}

@property (nonatomic) int blendMode;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isDithered;
- (struct _psdGradientColor)fillColor;
- (id)colorStops;
- (id)colorMidpointLocations;
- (id)opacityStops;
- (id)opacityMidpointLocations;
- (double)smoothingCoefficient;
- (id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillColor:(struct _psdGradientColor)arg6 dither:(_Bool)arg7;
- (id)_cleanedUpMidpointLocationsFromLocations:(id)arg1;
- (void)_createOrderedStops:(id *)arg1 midpoints:(id *)arg2 fromStops:(id)arg3 midpoints:(id)arg4 edgePixel:(long long *)arg5;
- (double)_smoothedInterpolationOfLocation:(double)arg1 betweenLower:(double)arg2 upper:(double)arg3 scaledMidpoint:(double)arg4;
- (id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillCoefficient:(double)arg6;
- (struct _psdGradientColor)_smoothedGradientColorAtLocation:(double)arg1;
- (double)fillCoefficient;
- (_Bool)hasEdgePixel;
- (void)setColorStops:(id)arg1 midpoints:(id)arg2;
- (void)setOpacityStops:(id)arg1 midpoints:(id)arg2;
- (void)setSmoothingCoefficient:(double)arg1;
- (void)setFillCoefficient:(double)arg1;
- (void)customizeForDistance:(double)arg1;

@end
