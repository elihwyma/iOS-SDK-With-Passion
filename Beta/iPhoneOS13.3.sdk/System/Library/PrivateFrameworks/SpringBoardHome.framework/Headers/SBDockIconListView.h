/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconListView.h>

@interface SBDockIconListView : SBIconListView

{
    _Bool _vertical;
    long long _layoutStyle;
    double _spacing;
    unsigned long long _minimumNumberOfIconsToDistributeEvenlyToEdges;
    struct UIEdgeInsets _layoutInsets;
}

@property (nonatomic) long long layoutStyle;
@property (nonatomic, getter=isVertical) _Bool vertical;
@property (nonatomic) struct UIEdgeInsets layoutInsets;
@property (nonatomic) double spacing;
@property (nonatomic, readonly) double effectiveSpacing;
@property (nonatomic) unsigned long long minimumNumberOfIconsToDistributeEvenlyToEdges;

+ (double)defaultHeight;
+ (unsigned long long)defaultIconViewConfigurationOptions;
+ (struct CGRect)defaultFrameForOrientation:(long long)arg1;

- (struct CGSize)intrinsicContentSize;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithModel:(id)arg1 layoutProvider:(id)arg2 iconLocation:(id)arg3 orientation:(long long)arg4 iconViewProvider:(id)arg5;
- (_Bool)allowsAddingIconCount:(unsigned long long)arg1;
- (id)iconAtPoint:(struct CGPoint)arg1 index:(unsigned long long *)arg2 proposedOrder:(long long *)arg3;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1 numberOfIcons:(unsigned long long)arg2;
- (double)effectiveSpacingForNumberOfIcons:(unsigned long long)arg1;
- (void)didAddIconView:(id)arg1;
- (struct CGRect)boundsForLayout;
- (struct CGSize)scaledAlignmentIconSize;
- (_Bool)automaticallyAdjustsLayoutMetricsToFit;
- (_Bool)adaptsOrientationToTraitCollection;
- (double)_additionalHorizontalInsetToCenterIcons;
- (double)_additionalVerticalInsetToCenterIcons;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1 metrics:(const struct SBIconListLayoutMetrics *)arg2;

@end
