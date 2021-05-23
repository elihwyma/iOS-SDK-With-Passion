/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMProperty.h>

#import <OfficeImport/Swift-Protocol.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface EMBordersProperty : CMProperty <Swift>

{
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
}

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)borderColor;
- (id)styleString;
- (int *)borderWidths;
- (id)colorString;
- (id)cssStringForName:(id)arg1;
- (id)initWithOADStroke:(id)arg1;
- (id)cssString;
- (id)widthString;
- (id)stringFromStyleEnum:(int)arg1;
- (id)stringFromWidthEnum:(int)arg1;
- (id)stringFromColor:(id)arg1;
- (_Bool)isNoneAtLocation:(int)arg1;
- (void)setNoneAtLocation:(int)arg1;
- (_Bool)hasSameColorsAs:(id)arg1;
- (_Bool)hasSameStylesAs:(id)arg1;
- (_Bool)hasSameWidthsAs:(id)arg1;
- (void)setBorderStyleAndWidth:(int)arg1 location:(unsigned int)arg2;
- (id)initWithEDBorders:(id)arg1;
- (int *)borderStyles;
- (id)styleHashNumber;
- (id)widthHashNumber;

@end
