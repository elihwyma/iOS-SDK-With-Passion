/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPChunk.h>

__attribute__((visibility("hidden")))
@interface CPTableCell : CPChunk

{
    struct CGRect cellBounds;
    CDStruct_627e0f85 rowSpan;
    CDStruct_627e0f85 columnSpan;
    struct {
        struct CGRect _field1;
        struct CGColor *_field2;
        unsigned int _field3;
        id *_field4;
    } *borders;
    struct CGColor *backgroundColor;
    unsigned int backgroundGraphicCount;
    id *backgroundGraphics;
}

@property (nonatomic, readonly) struct CGRect cellBounds;
@property (nonatomic) CDStruct_627e0f85 rowSpan;
@property (nonatomic) CDStruct_627e0f85 columnSpan;
@property (nonatomic, readonly) unsigned int backgroundGraphicCount;

- (void)dealloc;
- (void)finalize;
- (struct CGColor *)backgroundColor;
- (id)initWithBounds:(struct CGRect)arg1;
- (void)dispose;
- (struct CGRect)boundsOfBorder:(int)arg1;
- (struct CGColor *)colorOfBorder:(int)arg1;
- (void)setBackgroundGraphics:(id)arg1;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;
- (void)setBorder:(int)arg1 bounds:(struct CGRect)arg2 graphics:(id)arg3;
- (unsigned int)graphicCountOfBorder:(int)arg1;
- (id)graphicObjectOfBorder:(int)arg1 atIndex:(unsigned int)arg2;
- (long long)compareCellOrdinal:(id)arg1;

@end
