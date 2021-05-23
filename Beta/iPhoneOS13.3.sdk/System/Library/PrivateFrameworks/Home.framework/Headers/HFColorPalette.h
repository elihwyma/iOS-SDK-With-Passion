/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSArray, NSString;

@interface HFColorPalette : NSObject <Swift>

{
    NSArray *_colors;
    unsigned long long _paletteType;
}

@property (copy, nonatomic) NSArray *colors;
@property (nonatomic, readonly) unsigned long long paletteType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultColorPaletteOfType:(unsigned long long)arg1;
+ (id)warmWhiteColor;
+ (id)_defaultRGBColors;
+ (id)_defaultTemperatureColors;
+ (id)_defaultColorsOfType:(unsigned long long)arg1;
+ (id)defaultColorPalette;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithColors:(id)arg1 type:(unsigned long long)arg2;
- (id)colorPaletteByAdjustingForColorProfile:(id)arg1;

@end
