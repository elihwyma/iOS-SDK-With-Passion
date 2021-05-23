/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPRegion.h>

@class CPParagraphListItem;

__attribute__((visibility("hidden")))
@interface CPParagraph : CPRegion

{
    _Bool noIndentation;
    _Bool below;
    unsigned long long alignment;
    _Bool hasDropCap;
    id flowProperties;
    CPParagraphListItem *listItem;
    double preformatWidth;
}

@property (retain, nonatomic) CPParagraphListItem *listItem;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)index;
- (unsigned long long)alignment;
- (void)setAlignment:(unsigned long long)arg1;
- (_Bool)isTextRegion;
- (void)accept:(id)arg1;
- (double)selectionBottom;
- (_Bool)isBoxRegion;
- (_Bool)isGraphicalRegion;
- (_Bool)isRowRegion;
- (void)setIsImageRegion:(_Bool)arg1;
- (_Bool)isImageRegion;
- (_Bool)isShapeRegion;
- (id)flowProperties;
- (void)setFlowProperties:(id)arg1;
- (_Bool)isParagraphRegion;
- (_Bool)isListItemRegion;
- (void)setIsTextRegion:(_Bool)arg1;
- (void)setNoIndentation:(_Bool)arg1;
- (_Bool)noIndentation;
- (_Bool)hasDropCap;
- (void)setHasDropCap:(_Bool)arg1;
- (void)explode;
- (struct CGRect)reducedBounds;
- (void)setBelow:(_Bool)arg1;
- (_Bool)below;
- (_Bool)isPreformattedWithUnitWidth:(double *)arg1;

@end
