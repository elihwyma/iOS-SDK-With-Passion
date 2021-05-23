/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class CMStyle, OADOrientedBounds, OADTextBody;

__attribute__((visibility("hidden")))
@interface PMShapeTextMapper : CMMapper

{
    OADTextBody *mTextBody;
    OADOrientedBounds *mBounds;
    CMStyle *mStyle;
    _Bool mRectangular;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (unsigned char)textAnchor;
- (void)setRectangular:(_Bool)arg1;
- (_Bool)isTableCellContent;

@end
