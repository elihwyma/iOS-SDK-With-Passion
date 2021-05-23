/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol _UIButtonBarLayoutMetricsData;

__attribute__((visibility("hidden")))
@interface _UIButtonBarLayout : NSObject

{
    id <_UIButtonBarLayoutMetricsData> _layoutMetrics;
    _Bool _dirty;
}

@property (nonatomic) _Bool dirty;

- (id)init;
- (id)description;
- (_Bool)compact;
- (id)_item;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (void)setSuppressSpacing:(_Bool)arg1;
- (void)setUseGroupSizing:(_Bool)arg1;
- (void)dirtyLayoutForPlainAppearanceChange:(_Bool)arg1 doneAppearanceChanged:(_Bool)arg2;
- (void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4;
- (_Bool)shouldHoriziontallyCenterView:(id)arg1;
- (_Bool)_shouldBeDirty;
- (void)_configure;
- (void)configure;
- (void)_addLayoutViews:(id)arg1;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (id)initWithLayoutMetrics:(id)arg1;
- (_Bool)_isSpace;
- (_Bool)_isGroup;
- (id)_metricsData;
- (_Bool)suppressSpacing;
- (_Bool)useGroupSizing;
- (void)addLayoutViews:(id)arg1;
- (void)addLayoutGuides:(id)arg1;
- (void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;

@end
