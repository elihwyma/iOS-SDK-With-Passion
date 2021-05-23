/*
 Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

#import <Foundation/NSObject.h>

@class NSString, PRMonogramColor, UIColor;

@interface PRMonogram : NSObject

{
    NSString *_text;
    unsigned long long _fontIndex;
    UIColor *_color;
    PRMonogramColor *_monogramColor;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long fontIndex;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (nonatomic, readonly) UIColor *plateFlatColor;
@property (nonatomic, readonly) UIColor *plateGradientStartColor;
@property (nonatomic, readonly) UIColor *plateGradientEndColor;
@property (nonatomic, readonly) UIColor *plateSelectedActiveColor;
@property (nonatomic, readonly) UIColor *plateSelectedInactiveColor;
@property (nonatomic, readonly) UIColor *plateSelectedActiveTextColor;

+ (id)monogram;
+ (id)fontForIndex:(unsigned long long)arg1 plateDiameter:(double)arg2;
+ (double)kerningForFontIndex:(unsigned long long)arg1 fontSize:(double)arg2;
+ (id)_fontSpecs;
+ (void)updatePlateOverlayLayer:(id)arg1;
+ (unsigned long long)countOfFonts;
+ (id)plateOverlayLayer;
+ (id)monogramWithData:(id)arg1;

- (id)init;
- (id)description;
- (id)dataRepresentation;
- (id)snapshotWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (id)_initWithData:(id)arg1;
- (id)initWithText:(id)arg1 fontIndex:(unsigned long long)arg2 monogramColor:(id)arg3;
- (_Bool)_renderTextInContext:(struct CGContext *)arg1 frame:(struct CGRect)arg2;
- (id)stringAttributesForDiameter:(double)arg1;
- (void)setFontIndexToUnsupportedValue;
- (void)_takeValuesFromDataRepresentation:(id)arg1;
- (id)dataRepresentationWithVersion:(unsigned char)arg1;

@end
