/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface NTKSpectrumColorPalette : NSObject

{
    unsigned long long _color;
    UIColor *_bandColor;
    UIColor *_fromColor;
    UIColor *_toColor;
}

@property (nonatomic, readonly) UIColor *bandColor;
@property (nonatomic, readonly) UIColor *fromColor;
@property (nonatomic, readonly) UIColor *toColor;

+ (id)swatchImageForColor:(unsigned long long)arg1 device:(id)arg2;
+ (id)paletteForColor:(unsigned long long)arg1 device:(id)arg2;

- (id)initWithColor:(unsigned long long)arg1 device:(id)arg2;

@end
