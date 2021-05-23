/*
 Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSString, UIColor;

@interface PRMonogramColor : NSObject

{
    NSString *_colorName;
    UIColor *_color;
    UIColor *_gradientStartColor;
    UIColor *_gradientEndColor;
    UIColor *_selectedActiveColor;
    UIColor *_selectedInactiveColor;
    UIColor *_selectedActiveTextColor;
    NSBundle *_bundle;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) UIColor *selectedActiveColor;
@property (retain, nonatomic) UIColor *selectedInactiveColor;
@property (retain, nonatomic) UIColor *selectedActiveTextColor;
@property (retain, nonatomic) NSBundle *bundle;
@property (nonatomic, readonly) NSString *colorName;

+ (id)gradientStartColor:(id)arg1;
+ (id)availableColors;
+ (id)defaultGradientStartColor;
+ (id)defaultGradientEndColor;
+ (id)defaultSelectedActiveColor;
+ (id)defaultSelectedInactiveColor;
+ (id)defaultSelectedActiveTextColor;
+ (id)gradientStartName:(id)arg1;
+ (id)gradientEndName:(id)arg1;
+ (id)generateMonogramGradientColorsByNameDictionary;
+ (id)monogramGradientColorNamed:(id)arg1;
+ (id)defaultBundle;
+ (id)colorWithName:(id)arg1 inBundle:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColorName:(id)arg1;
- (void)setColorName:(id)arg1;
- (id)initWithColorName:(id)arg1 inBundle:(id)arg2;

@end
