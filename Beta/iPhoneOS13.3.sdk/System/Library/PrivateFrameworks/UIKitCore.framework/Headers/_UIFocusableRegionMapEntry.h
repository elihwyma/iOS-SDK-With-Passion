/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusRegionMapEntry.h>

@protocol _UILegacyFocusRegion;

__attribute__((visibility("hidden")))
@interface _UIFocusableRegionMapEntry : _UIFocusRegionMapEntry

{
    _Bool _isFocusGuide;
    _Bool _focusCandidate;
    id <_UILegacyFocusRegion> _focusableRegion;
}

@property (weak, nonatomic) id <_UILegacyFocusRegion> focusableRegion;
@property (nonatomic) _Bool isFocusGuide;
@property (nonatomic, getter=isFocusCandidate) _Bool focusCandidate;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawVisualRepresentationInContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 isFinal:(_Bool)arg3;
- (id)visualRepresentationColor;

@end
