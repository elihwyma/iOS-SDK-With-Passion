/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSString, UIColor;

@interface NTKCaliforniaColorPalette : NSObject

{
    unsigned long long _color;
    UIColor *_backgroundColor;
    UIColor *_circularBackgroundColor;
    UIColor *_swatchBackgroundColor;
    UIColor *_hourMarkerColor;
    UIColor *_smallTickColor;
    UIColor *_largeTickColor;
    UIColor *_hourHandInlayColor;
    UIColor *_hourHandStrokeColor;
    UIColor *_secondHandColor;
    UIColor *_cornerComplicationOuterTextColor;
    UIColor *_cornerComplicationInnerTextColor;
    UIColor *_simpleTextComplicationColor;
    UIColor *_circularComplicationColorA;
    UIColor *_circularComplicationColorB;
    UIColor *_bezelComplicationColor;
    UIColor *_circularDialSubtickColor;
    CLKDevice *_device;
}

@property (nonatomic, readonly) unsigned long long color;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *circularBackgroundColor;
@property (nonatomic, readonly) _Bool isBlackBackground;
@property (nonatomic, readonly) UIColor *hourMarkerColor;
@property (nonatomic, readonly) UIColor *smallTickColor;
@property (nonatomic, readonly) UIColor *largeTickColor;
@property (nonatomic, readonly) UIColor *hourHandInlayColor;
@property (nonatomic, readonly) UIColor *hourHandStrokeColor;
@property (nonatomic, readonly) UIColor *secondHandColor;
@property (nonatomic, readonly) UIColor *cornerComplicationOuterTextColor;
@property (nonatomic, readonly) UIColor *cornerComplicationInnerTextColor;
@property (nonatomic, readonly) UIColor *simpleTextComplicationColor;
@property (nonatomic, readonly) UIColor *bezelComplicationColor;
@property (nonatomic, readonly) UIColor *circularComplicationColorA;
@property (nonatomic, readonly) UIColor *circularComplicationColorB;
@property (nonatomic, readonly) long long richComplicationViewTheme;
@property (nonatomic, readonly) UIColor *platterTextColor;
@property (nonatomic, readonly) UIColor *worldClockDaytimeBackgrounColor;
@property (nonatomic, readonly) UIColor *worldClockDaytimeHandsColors;
@property (nonatomic, readonly) UIColor *worldClockDaytimeHandsDotColors;
@property (nonatomic, readonly) UIColor *worldClockNighttimeBackgrounColor;
@property (nonatomic, readonly) UIColor *worldClockNighttimeHandsColors;
@property (nonatomic, readonly) UIColor *worldClockNighttimeHandsDotColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)paletteForColor:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)initWithColor:(unsigned long long)arg1;
- (id)swatchImage;
- (id)circularDialFillColor;
- (id)circularDialSubtickColor;
- (id)circularDialTickColor;
- (_Bool)isLightColor;
- (id)swatchBackgroundColor;

@end
