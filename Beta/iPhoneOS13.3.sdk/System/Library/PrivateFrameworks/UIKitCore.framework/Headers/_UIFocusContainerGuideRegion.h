/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusGuideRegion.h>

@protocol _UIFocusRegionContainer;

@interface _UIFocusContainerGuideRegion : _UIFocusGuideRegion

{
    id <_UIFocusRegionContainer> _contentFocusRegionContainer;
}

@property (weak, nonatomic) id <_UIFocusRegionContainer> contentFocusRegionContainer;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2;
- (id)_visualRepresentationColor;
- (unsigned long long)_focusableBoundaries;

@end
