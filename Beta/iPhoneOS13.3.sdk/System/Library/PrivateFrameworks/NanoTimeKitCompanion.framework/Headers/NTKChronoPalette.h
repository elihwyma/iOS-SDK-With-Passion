/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, UIColor;

@interface NTKChronoPalette : NSObject

{
    _Bool _showsShadows;
    CLKDevice *_device;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_tickColor;
    UIColor *_alternativeTickColor;
    UIColor *_labelColor;
    UIColor *_chronoHandColor;
    UIColor *_dateComplicationColor;
    UIColor *_inlayColor;
    UIColor *_glyphColor;
    UIColor *_glyphBackgroundColor;
    double _smallTickValue;
    double _largeTickValue;
    unsigned long long _paletteColor;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, readonly) UIColor *tickColor;
@property (nonatomic, readonly) UIColor *alternativeTickColor;
@property (nonatomic, readonly) UIColor *labelColor;
@property (nonatomic, readonly) UIColor *chronoHandColor;
@property (nonatomic, readonly) UIColor *dateComplicationColor;
@property (nonatomic, readonly) UIColor *inlayColor;
@property (nonatomic, readonly) UIColor *glyphColor;
@property (nonatomic, readonly) UIColor *glyphBackgroundColor;
@property (nonatomic, readonly) double smallTickValue;
@property (nonatomic, readonly) double largeTickValue;
@property (nonatomic, readonly) unsigned long long paletteColor;
@property (nonatomic, readonly) _Bool showsShadows;

+ (id)paletteForDevice:(id)arg1 withColor:(unsigned long long)arg2;
+ (id)interpolationFromPalette:(id)arg1 toPalette:(id)arg2 fraction:(double)arg3;

- (id)initForDevice:(id)arg1;
- (id)_initForDevice:(id)arg1 withColor:(unsigned long long)arg2;

@end
