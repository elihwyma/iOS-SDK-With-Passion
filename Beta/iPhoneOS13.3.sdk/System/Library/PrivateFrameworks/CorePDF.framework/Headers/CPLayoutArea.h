/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPRegion.h>

__attribute__((visibility("hidden")))
@interface CPLayoutArea : CPRegion

{
    _Bool isFirstLayout;
}

- (id)init;
- (id)description;
- (id)properties;
- (void)accept:(id)arg1;
- (double)selectionBottom;
- (_Bool)isBoxRegion;
- (_Bool)isGraphicalRegion;
- (_Bool)isRowRegion;
- (void)setIsImageRegion:(_Bool)arg1;
- (_Bool)isImageRegion;
- (_Bool)isShapeRegion;
- (struct CGRect)layoutAreaBounds;
- (_Bool)isSimilarTo:(id)arg1;
- (_Bool)isFirstLayout;
- (void)setIsFirstLayout:(_Bool)arg1;
- (void)addColumnBreaks;

@end
