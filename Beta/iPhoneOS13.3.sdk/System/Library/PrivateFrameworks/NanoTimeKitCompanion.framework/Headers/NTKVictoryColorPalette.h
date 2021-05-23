/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface NTKVictoryColorPalette : NSObject

{
    _Bool _hasWhiteElements;
    unsigned long long _color;
    UIColor *_numbersColor;
    UIColor *_handsColor;
    UIColor *_logoColor;
    UIColor *_secondHandColor;
    UIColor *_handInlayColor;
    UIColor *_analogComplicationsColor;
    UIColor *_analogDotColor;
    UIColor *_digitalComplicationsColor;
    UIColor *_digitalComplicationsPlatterColor;
    UIColor *_platterColor;
    UIColor *_cornerComplicationsAccentColor;
    unsigned long long _bleed;
    UIColor *_backgroundColor;
}

@property (nonatomic, readonly) unsigned long long color;
@property (nonatomic, readonly) UIColor *numbersColor;
@property (nonatomic, readonly) UIColor *handsColor;
@property (nonatomic, readonly) UIColor *logoColor;
@property (nonatomic, readonly) UIColor *secondHandColor;
@property (nonatomic, readonly) UIColor *handInlayColor;
@property (nonatomic, readonly) UIColor *analogComplicationsColor;
@property (nonatomic, readonly) UIColor *analogDotColor;
@property (nonatomic, readonly) UIColor *digitalComplicationsColor;
@property (nonatomic, readonly) UIColor *digitalComplicationsPlatterColor;
@property (nonatomic, readonly) UIColor *platterColor;
@property (nonatomic, readonly) UIColor *cornerComplicationsAccentColor;
@property (nonatomic, readonly) _Bool hasWhiteElements;
@property (nonatomic, readonly) unsigned long long bleed;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)paletteForColor:(unsigned long long)arg1 style:(unsigned long long)arg2;
+ (id)paletteForColor:(unsigned long long)arg1 bleed:(unsigned long long)arg2;
+ (id)voltColor;

- (id)initWithColor:(unsigned long long)arg1 bleed:(unsigned long long)arg2;

@end
