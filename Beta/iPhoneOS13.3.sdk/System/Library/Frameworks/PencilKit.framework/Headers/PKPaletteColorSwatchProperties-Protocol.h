/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/Swift-Protocol.h>

@class PKSwatchColor;

@protocol PKPaletteColorSwatchProperties <Swift>

@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic) _Bool showsSelectionHighlight;
@property (retain, nonatomic) PKSwatchColor *swatchColor;
@property (nonatomic) long long colorUserInterfaceStyle;

@end
