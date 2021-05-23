/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDrawableMapper.h>

@class WDAContent;

__attribute__((visibility("hidden")))
@interface WMOfficeArtMapper : CMDrawableMapper

{
    _Bool mFloating;
    _Bool mIsMapped;
    _Bool mIsInsideGroup;
    WDAContent *mContent;
    unsigned int mCurrentPage;
}

- (void)setCurrentPage:(unsigned int)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)initWithOadDrawable:(id)arg1 asFloating:(_Bool)arg2 parent:(id)arg3;
- (void)setBoundingBox;
- (void)setWithClientData:(id)arg1 state:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2;
- (_Bool)isInsideGroup;
- (void)setIsInsideGroup:(_Bool)arg1;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtTextboxAt:(id)arg1 withState:(id)arg2;
- (struct CGSize)expandedSizeForTextBox:(id)arg1 withState:(id)arg2;

@end
