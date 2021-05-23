/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAdornmentLayer.h>

@class CAShapeLayer;

@interface AKCropAdornmentLayer : AKAdornmentLayer

{
    CAShapeLayer *_handlesLayer;
}

@property (retain) CAShapeLayer *handlesLayer;

- (void)updateAdornmentElements;
- (void)updateSublayersWithScale:(double)arg1;
- (_Bool)needsUpdateWhenDraggingStartsOrEnds;
- (void)_addHandles;
- (void)_updateHandles;
- (_Bool)_shouldShowHandles;
- (void)_removeHandles;

@end
