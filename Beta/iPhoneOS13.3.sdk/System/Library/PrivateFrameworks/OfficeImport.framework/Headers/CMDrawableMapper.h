/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class CMDrawableStyle, NSData, NSString, OADDrawable, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMDrawableMapper : CMMapper

{
    OADDrawable *mDrawable;
    CMDrawableStyle *mStyle;
    NSData *mImageBinaryData;
    NSString *mName;
    NSString *mExtension;
    int mResourceType;
    NSString *mSourcePath;
    struct CGRect mBox;
    float mRotation;
    _Bool mIsSupported;
    _Bool mIsCropped;
    struct CGRect mUncroppedBox;
    OADOrientedBounds *mOrientedBounds;
}

- (id)initWithParent:(id)arg1;
- (float)rotation;
- (void)setRotation:(float)arg1;
- (struct CGRect)box;
- (_Bool)isCropped;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)initWithOadDrawable:(id)arg1 parent:(id)arg2;
- (void)setBoundingBox;
- (void)setWithOadImage:(id)arg1;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (void)calculateUncroppedBox:(id)arg1;
- (struct CGRect)uncroppedBox;
- (id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2;
- (void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)shapeTextBoxRect;
- (void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(_Bool)arg3 withState:(id)arg4;
- (void)mapBounds;
- (id)convertMetafileToPdf;
- (void)mapImageBinaryData;

@end
