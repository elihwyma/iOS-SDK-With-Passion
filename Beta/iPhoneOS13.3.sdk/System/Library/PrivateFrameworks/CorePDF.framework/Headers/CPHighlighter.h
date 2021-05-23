/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPTextLine, CPZone;

__attribute__((visibility("hidden")))
@interface CPHighlighter : NSObject

{
    CPZone *boundingZone;
    CPTextLine *textLine;
    struct CGColor *color;
    struct CPPDFStyle *style;
    struct CPPDFStyle *highlightedStyle;
}

@property (nonatomic, readonly) struct CGColor *color;
@property (nonatomic) struct CPPDFStyle *style;
@property (nonatomic) struct CPPDFStyle *highlightedStyle;

+ (_Bool)reconstructHighlightFor:(id)arg1;

- (void)highlight;
- (id)initWithTextLine:(id)arg1 inZone:(id)arg2 ofColor:(struct CGColor *)arg3;

@end
