/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIAccessibilityElement.h>

@class CALayer, ICDocCamImageQuadEditOverlay;

__attribute__((visibility("hidden")))
@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement

{
    CALayer *_knobLayer;
    ICDocCamImageQuadEditOverlay *_overlayView;
}

@property (weak, nonatomic) CALayer *knobLayer;
@property (weak, nonatomic) ICDocCamImageQuadEditOverlay *overlayView;

- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityViewIsModal;
- (id)initWithKnobLayer:(id)arg1 overlayView:(id)arg2;

@end
