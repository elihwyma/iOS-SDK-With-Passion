/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusRegion.h>

@protocol _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusPromiseRegion : _UIFocusRegion

{
    id <_UIFocusRegionContainer> _contentFocusRegionContainer;
    CDUnknownBlockType _contentFulfillmentHandler;
}

@property (copy, nonatomic) CDUnknownBlockType contentFulfillmentHandler;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)_visualRepresentationColor;
- (unsigned long long)_focusableBoundaries;
- (long long)_visualRepresentationPatternType;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (_Bool)_shouldCropRegionToSearchArea;
- (id)_loadContentFocusRegionContainer;

@end
