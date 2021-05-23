/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDAbstractLayout.h>

@class TSDLayoutController, TSUPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout

{
    TSDLayoutController *mLayoutController;
    _Bool mSupportsAdaptiveLayout;
    TSUPointerKeyDictionary *mShiftedObjects;
}

- (void)dealloc;
- (id)layoutController;
- (_Bool)isRootLayoutForInspectorGeometry;
- (id)initWithLayoutController:(id)arg1;
- (id)childLayoutsInRect:(struct CGRect)arg1;
- (_Bool)providesGuidesForChildLayouts;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)p_shiftedObjects;
- (void)beginDynamicAdaptiveLayout;
- (void)endDynamicAdaptiveLayout;
- (struct CGPoint)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(struct CGPoint)arg3;

@end
