/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDStyledRep.h>

@class CALayer, CAShapeLayer, TSDFrameRep, TSDMediaInfo, TSDMediaLayout;

@interface TSDMediaRep : TSDStyledRep

{
    _Bool mIsZooming;
    CALayer *mTapToReplaceLayer;
    CAShapeLayer *mMaskLayer;
    CAShapeLayer *mStrokeLayer;
    CALayer *mFrameMaskLayer;
    TSDFrameRep *mFrameRep;
    struct CGRect mLastPictureFrameLayerRect;
}

@property (nonatomic, readonly) TSDMediaInfo *mediaInfo;
@property (nonatomic, readonly) TSDMediaLayout *mediaLayout;
@property (nonatomic, readonly) _Bool shouldShowMediaReplaceUI;

- (void)dealloc;
- (_Bool)isPlaceholder;
- (void)willBeginZooming;
- (void)processChangedProperty:(int)arg1;
- (void)didEndZooming;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (_Bool)shouldCreateKnobs;
- (void)addKnobsToArray:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (struct CGPoint)positionOfHyperlinkKnob;
- (_Bool)replaceButtonContainsPoint:(struct CGPoint)arg1;
- (void)i_updateFrameRep;
- (_Bool)shouldAllowReplacementFromPaste;
- (id)visibleMediaReplaceButtonLayer;
- (_Bool)i_shouldRenderStroke:(id)arg1;
- (_Bool)canResetMediaSize;
- (_Bool)shouldAllowReplacementFromDrop;
- (void)p_addLayerForReplaceButtonToArray:(id)arg1;
- (struct CGSize)p_replaceButtonSize;
- (id)p_tapToReplaceLayer;
- (id)currentReplaceButtonImage;
- (void)p_updateTapToReplaceLayerPosition;
- (struct CGPoint)p_scaledPositionOfImageReplaceKnob;
- (id)currentReplaceButtonHighlightedImage;

@end
