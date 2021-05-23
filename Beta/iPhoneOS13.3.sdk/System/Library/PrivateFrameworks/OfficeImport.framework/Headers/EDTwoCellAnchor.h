/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDAnchor.h>

__attribute__((visibility("hidden")))
@interface EDTwoCellAnchor : EDAnchor

{
    struct EDCellAnchorMarker mFrom;
    struct EDCellAnchorMarker mTo;
    _Bool mIsRelative;
    int mEditAs;
}

- (id)init;
- (id).cxx_construct;
- (struct EDCellAnchorMarker)to;
- (struct EDCellAnchorMarker)from;
- (void)setFrom:(struct EDCellAnchorMarker)arg1;
- (void)setTo:(struct EDCellAnchorMarker)arg1;
- (_Bool)isRelative;
- (void)setRelative:(_Bool)arg1;
- (int)editAs;
- (void)setEditAs:(int)arg1;

@end
