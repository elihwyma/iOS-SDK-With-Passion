/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDAnchor.h>

__attribute__((visibility("hidden")))
@interface EDOneCellAnchor : EDAnchor

{
    struct EDCellAnchorMarker mFrom;
    struct CGSize mSize;
    _Bool mIsRelative;
}

- (struct CGSize)size;
- (id).cxx_construct;
- (void)setSize:(struct CGSize)arg1;
- (struct EDCellAnchorMarker)from;
- (void)setFrom:(struct EDCellAnchorMarker)arg1;
- (_Bool)isRelative;
- (void)setRelative:(_Bool)arg1;

@end
