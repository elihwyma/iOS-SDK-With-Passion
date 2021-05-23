/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSFormatter;

@interface TSKRulerUnits : NSObject

{
    int _rulerUnits;
    _Bool _showRulerAsPercentage;
    _Bool _centerRulerOrigin;
    int _preferredPixelUnit;
    NSFormatter *_formatter;
    NSFormatter *_lenientFormatter;
    NSFormatter *_highPrecisionFormatter;
    NSFormatter *_lenientHighPrecisionFormatter;
}

@property (nonatomic) int rulerUnits;
@property (nonatomic) _Bool showRulerAsPercentage;
@property (nonatomic) _Bool centerRulerOrigin;
@property (nonatomic) int preferredPixelUnit;

+ (id)instance;
+ (id)formatterForRulerUnits:(int)arg1 decimalPlaces:(int)arg2 trailingZeros:(_Bool)arg3 lenient:(_Bool)arg4;

- (id)init;
- (void)dealloc;
- (double)convertRulerUnitsToPoints:(double)arg1;
- (double)convertPointsToRulerUnits:(double)arg1;
- (id)formatter:(_Bool)arg1 lenient:(_Bool)arg2;
- (id)compatibleRulerUnits;
- (id)localizedCompatibleRulerUnits;

@end
