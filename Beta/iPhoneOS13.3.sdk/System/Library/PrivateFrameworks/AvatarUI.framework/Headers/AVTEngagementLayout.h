/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTEngagementLayout : NSObject

{
    CDUnknownBlockType _interItemSpacingProvider;
    struct CGSize _defaultCellSize;
    struct CGSize _engagedCellSize;
    struct UIEdgeInsets _engagementBoundsInsets;
}

@property (nonatomic, readonly) struct CGSize defaultCellSize;
@property (nonatomic, readonly) struct CGSize engagedCellSize;
@property (nonatomic) struct UIEdgeInsets engagementBoundsInsets;
@property (copy, nonatomic, readonly) CDUnknownBlockType interItemSpacingProvider;

+ (double)minimumInterItemSpacingForVisibileBoundsSize:(struct CGSize)arg1 defaultCellSize:(struct CGSize)arg2 engagedCellSize:(struct CGSize)arg3;
+ (struct UIEdgeInsets)insetsToCenterFirstAndLastItemsGivenContainerSize:(struct CGSize)arg1 itemSize:(struct CGSize)arg2;

- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2;
- (id)indexesForElementsInRect:(struct CGRect)arg1 visibleBounds:(struct CGRect)arg2 numberOfItems:(long long)arg3;
- (struct CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(struct CGSize)arg2 proposedOrigin:(struct CGPoint)arg3;
- (id)initWithDefaultCellSize:(struct CGSize)arg1 engagedCellSize:(struct CGSize)arg2 interItemSpacingProvider:(CDUnknownBlockType)arg3;
- (id)initWithDefaultCellSize:(struct CGSize)arg1 engagedCellSize:(struct CGSize)arg2 baseInteritemSpacing:(double)arg3;
- (struct CGSize)contentSizeForVisibleBounds:(struct CGRect)arg1 numberOfItems:(long long)arg2;
- (struct CGRect)initialFrameForAppearingElementAtOriginForVisibleBounds:(struct CGRect)arg1;
- (struct CGRect)finalFrameForDisappearingElementAtOriginForVisibleBounds:(struct CGRect)arg1;
- (struct CGSize)engagementSizeForVisibleBoundsSize:(struct CGSize)arg1;
- (struct CGRect)engagementBoundsForContainerBounds:(struct CGRect)arg1;
- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2 engagementBounds:(struct CGRect)arg3 verticalBounds:(CDStruct_c3b9c2ee)arg4;
- (double)contentOriginXForVisibleSize:(struct CGSize)arg1;
- (double)xAxisScale;
- (struct CGRect)frameForElementAfterElementEndingAt:(double)arg1 engagementBounds:(struct CGRect)arg2 verticalBounds:(CDStruct_c3b9c2ee)arg3;
- (double)spacingAfterElementEndingAt:(double)arg1 engagementBounds:(struct CGRect)arg2;
- (double)engagementForValue:(double)arg1 withRangeMin:(double)arg2 rangeMax:(double)arg3 rangePeak:(double)arg4;
- (struct CGSize)cellSizeForEngagement:(double)arg1;
- (double)interitemSpacingForEngagement:(double)arg1;
- (double)engagementForValue:(double)arg1 withRangeMin:(double)arg2 rangeMax:(double)arg3 rangePeakBegin:(double)arg4 rangePeakEnd:(double)arg5;
- (double)spacingBeforElementStartingAt:(double)arg1 engagementBounds:(struct CGRect)arg2;
- (struct CGRect)frameForElementBeforeElementStartingAt:(double)arg1 engagementBounds:(struct CGRect)arg2 verticalBounds:(CDStruct_c3b9c2ee)arg3;
- (double)contentTrailingXForVisibleSize:(struct CGSize)arg1;
- (struct CGRect)frameForElementBeforeOriginForVisibleBounds:(struct CGRect)arg1;

@end
