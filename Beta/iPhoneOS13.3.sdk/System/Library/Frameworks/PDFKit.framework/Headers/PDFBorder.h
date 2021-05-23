/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, PDFBorderPrivateVars;

@interface PDFBorder : NSObject

{
    PDFBorderPrivateVars *_private;
}

@property (nonatomic) long long style;
@property (nonatomic) double lineWidth;
@property (copy, nonatomic) NSArray *dashPattern;
@property (copy, nonatomic, readonly) NSDictionary *borderKeyValues;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (void)setAnnotation:(id)arg1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (double)horizontalCornerRadius;
- (double)verticalCornerRadius;
- (const struct __CFDictionary *)createDictionaryRef;
- (void)setHorizontalCornerRadius:(double)arg1;
- (void)setVerticalCornerRadius:(double)arg1;
- (const double *)dashPatternRaw;
- (unsigned int)dashCountRaw;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)_updateDashPatternRaw;
- (void)_setStyleFromDictionary:(struct CGPDFDictionary *)arg1;
- (_Bool)setBorderCharacteristicsFromArray:(struct CGPDFArray *)arg1;
- (_Bool)_isRectangular;
- (void)_setDashFromArray:(struct CGPDFArray *)arg1;
- (void)updateCornerBorderStyle;

@end
