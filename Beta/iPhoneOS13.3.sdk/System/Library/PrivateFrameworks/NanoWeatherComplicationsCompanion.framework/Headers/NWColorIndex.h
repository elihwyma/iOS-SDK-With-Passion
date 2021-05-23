/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <Foundation/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface NWColorIndex : NSObject

{
    double _value;
    UIColor *_color;
}

@property (nonatomic, readonly) double value;
@property (nonatomic, readonly) UIColor *color;

+ (id)indexForValue:(double)arg1;
+ (id)indexWithValue:(double)arg1 color:(id)arg2;
+ (id)colorForValue:(double)arg1;
+ (id)zeroIndex;

- (_Bool)isEqual:(id)arg1;
- (id)initWithValue:(double)arg1 color:(id)arg2;

@end
