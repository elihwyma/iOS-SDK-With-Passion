/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDStyledLayout.h>

@class TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout

{
    struct CGRect mCachedAlignmentFrame;
    struct {
        unsigned int alignmentFrame:1;
    } mMediaInvalidFlags;
    TSDMutableStroke *mDynamicStroke;
    _Bool mShouldRenderFrameStroke;
    struct CGRect mBoundsForStandardKnobs;
}

@property (nonatomic) struct CGRect boundsForStandardKnobs;
@property (nonatomic) _Bool shouldRenderFrameStroke;

- (id)initWithInfo:(id)arg1;
- (id)stroke;
- (void)setGeometry:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (_Bool)supportsRotation;
- (struct CGRect)alignmentFrame;
- (_Bool)isStrokeBeingManipulated;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)dynamicStrokeWidthChangeDidEnd;
- (struct CGRect)alignmentFrameInRoot;
- (void)invalidateAlignmentFrame;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (id)mediaInfo;

@end
