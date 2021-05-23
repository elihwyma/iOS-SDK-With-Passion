/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NTKOlympusColorPalette, UIColor;

@interface NTKOlympusAnalogBackgroundPalette : NSObject

{
    NTKOlympusColorPalette *_olympusPalette;
}

@property (retain, nonatomic) NTKOlympusColorPalette *olympusPalette;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *numbersColor;
@property (nonatomic, readonly) UIColor *logoColor;
@property (nonatomic, readonly) UIColor *analogDotColor;
@property (nonatomic, readonly) _Bool hasWhiteElements;

- (id)initWithOlympusPalette:(id)arg1 alternatePalette:(id)arg2;
- (id)initWithOlympusPalette:(id)arg1;

@end
