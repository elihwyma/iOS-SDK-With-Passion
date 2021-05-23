/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface NTKOlympusColorPalette : NSObject

{
    unsigned long long _color;
    unsigned long long _style;
    unsigned long long _dial;
    UIColor *_mainColor;
    UIColor *_darkMainColor;
    UIColor *_accentColor;
    UIColor *_blackColor;
    UIColor *_softWhiteColor;
    UIColor *_softBlackColor;
    UIColor *_lightMainColor;
    UIColor *_primaryBackgroundColor;
    UIColor *_primaryTextColor;
    UIColor *_primaryLogoColor;
    UIColor *_secondaryBackgroundColor;
    UIColor *_secondaryTextColor;
    UIColor *_secondaryLogoColor;
    UIColor *_largeHandsColor;
    UIColor *_secondHandColor;
    UIColor *_cornerComplicationsAccentColor;
    UIColor *_circularDialSubtickColor;
}

@property (nonatomic) unsigned long long color;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long dial;
@property (retain, nonatomic) UIColor *mainColor;
@property (retain, nonatomic) UIColor *darkMainColor;
@property (retain, nonatomic) UIColor *accentColor;
@property (retain, nonatomic) UIColor *blackColor;
@property (retain, nonatomic) UIColor *softWhiteColor;
@property (retain, nonatomic) UIColor *softBlackColor;
@property (retain, nonatomic) UIColor *lightMainColor;
@property (retain, nonatomic) UIColor *primaryBackgroundColor;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *primaryLogoColor;
@property (retain, nonatomic) UIColor *secondaryBackgroundColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) UIColor *secondaryLogoColor;
@property (retain, nonatomic) UIColor *largeHandsColor;
@property (retain, nonatomic) UIColor *secondHandColor;
@property (retain, nonatomic) UIColor *cornerComplicationsAccentColor;
@property (retain, nonatomic) UIColor *circularDialSubtickColor;
@property (nonatomic, readonly) UIColor *primaryOutlineTextColor;
@property (nonatomic, readonly) _Bool isBlackBackground;
@property (nonatomic, readonly) UIColor *secondaryOutlineTextColor;
@property (nonatomic, readonly) UIColor *bezelComplicationColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)paletteForColor:(unsigned long long)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)circularDialFillColor;
- (id)circularDialTickColor;
- (id)initWithColor:(unsigned long long)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3;

@end
