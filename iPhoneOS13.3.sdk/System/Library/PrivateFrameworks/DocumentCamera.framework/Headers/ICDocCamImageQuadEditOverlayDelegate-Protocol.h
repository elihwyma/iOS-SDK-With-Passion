//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALayer, ICDocCamImageQuad, ICDocCamImageQuadEditOverlay;

@protocol ICDocCamImageQuadEditOverlayDelegate <NSObject>
- (void)overlayDidLayout:(ICDocCamImageQuadEditOverlay *)arg1;
- (double)currentZoomFactorForOverlay;
- (ICDocCamImageQuad *)quadForOverlay:(ICDocCamImageQuadEditOverlay *)arg1;
- (void)selectedKnobDidChange:(CALayer *)arg1;
- (void)selectedKnobDidPanToRect:(CGRect)arg1;
- (CGRect)imageFrameInOverlayCoordinates;
- (CGRect)unitImageRectForOverlayRect:(CGRect)arg1;
@end
