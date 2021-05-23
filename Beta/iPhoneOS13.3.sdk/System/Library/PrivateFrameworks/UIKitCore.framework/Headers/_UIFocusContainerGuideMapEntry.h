/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusRegionMapEntry.h>

@class UIFocusContainerGuide;

__attribute__((visibility("hidden")))
@interface _UIFocusContainerGuideMapEntry : _UIFocusRegionMapEntry

{
    UIFocusContainerGuide *_focusContainerGuide;
    double _axisAlignedDistanceFromFocusedRect;
    struct CGRect _focusContainmentFrame;
}

@property (weak, nonatomic) UIFocusContainerGuide *focusContainerGuide;
@property (nonatomic) struct CGRect focusContainmentFrame;
@property (nonatomic) double axisAlignedDistanceFromFocusedRect;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawVisualRepresentationInContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2;
- (id)visualRepresentationColor;

@end
