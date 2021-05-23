/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPChunk.h>

__attribute__((visibility("hidden")))
@interface CPTable : CPChunk

{
    struct CGRect tableBounds;
    unsigned int rowCount;
    double *rowY;
    unsigned int columnCount;
    double *columnX;
    struct CGColor *backgroundColor;
    unsigned int backgroundGraphicCount;
    id *backgroundGraphics;
    unsigned int usedGraphicCount;
    _Bool disposed;
}

@property (nonatomic, readonly) struct CGRect tableBounds;
@property (nonatomic) unsigned int rowCount;
@property (nonatomic, readonly) double *rowY;
@property (nonatomic) unsigned int columnCount;
@property (nonatomic, readonly) double *columnX;
@property (nonatomic, readonly) unsigned int backgroundGraphicCount;

- (void)dealloc;
- (void)finalize;
- (struct CGColor *)backgroundColor;
- (id)initWithBounds:(struct CGRect)arg1;
- (void)dispose;
- (void)incrementUsedGraphicCount;
- (unsigned int)usedGraphicCount;
- (void)setBackgroundGraphics:(id)arg1;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;

@end
