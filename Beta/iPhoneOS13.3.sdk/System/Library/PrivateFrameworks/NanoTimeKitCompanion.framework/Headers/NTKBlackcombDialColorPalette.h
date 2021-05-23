/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface NTKBlackcombDialColorPalette : NSObject

{
    UIColor *_backgroundColor;
    UIColor *_hourMarkerColor;
    UIColor *_smallTickColor;
    UIColor *_largeTickColor;
    UIColor *_largeHandsColor;
    UIColor *_secondHandColor;
    unsigned long long _color;
}

@property (nonatomic, readonly) unsigned long long color;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *hourMarkerColor;
@property (nonatomic, readonly) UIColor *smallTickColor;
@property (nonatomic, readonly) UIColor *largeTickColor;
@property (nonatomic, readonly) long long richComplicationViewTheme;
@property (nonatomic, readonly) UIColor *platterTextColor;

+ (id)paletteForColor:(unsigned long long)arg1;

- (id)initWithColor:(unsigned long long)arg1;

@end
