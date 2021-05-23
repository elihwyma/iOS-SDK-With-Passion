/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKPaletteColorSwatch.h>

@class NSString, PKSwatchColor;

@interface PKPaletteMulticolorSwatch : PKPaletteColorSwatch

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic) _Bool showsSelectionHighlight;
@property (retain, nonatomic) PKSwatchColor *swatchColor;
@property (nonatomic) long long colorUserInterfaceStyle;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)newColorBackgroundView;
- (_Bool)wantsBackgroundViewColor;
- (_Bool)wantsColorBulletVisible;

@end
