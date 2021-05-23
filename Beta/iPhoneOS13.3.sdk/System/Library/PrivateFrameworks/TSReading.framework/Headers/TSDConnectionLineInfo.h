/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDShapeInfo.h>

@class TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo

{
    TSDDrawableInfo *mConnectedFrom;
    TSDDrawableInfo *mConnectedTo;
    struct {
        unsigned int connectedFrom:1;
        unsigned int connectedTo:1;
    } mInvalidFlags;
}

@property (retain, nonatomic) TSDDrawableInfo *connectedFrom;
@property (retain, nonatomic) TSDDrawableInfo *connectedTo;

- (void)dealloc;
- (Class)layoutClass;
- (void)didCopy;
- (id)copyWithContext:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (Class)repClass;
- (id)presetKind;
- (void)performBlockWithTemporaryLayout:(CDUnknownBlockType)arg1;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (_Bool)canAnchor;
- (void)computeLayoutInfoGeometry:(id *)arg1 andPathSource:(id *)arg2;
- (id)computeLayoutInfoGeometry;

@end
