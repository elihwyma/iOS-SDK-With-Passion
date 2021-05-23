/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBFluidSwitcherScrollProvidingDelegate;

@protocol SBFluidSwitcherScrollProviding <Swift>

@property (weak, nonatomic) id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;

- (unsigned short)contentSize;
- (unsigned short)decelerationRate;
- (unsigned short)pagingOrigin;
- (unsigned short)scrollAxis;
- (unsigned short)switcherCardScale;
- (unsigned short)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch: /* Error: Ran out of types for this method. */;
- (unsigned short)snapshotScale;
- (unsigned short)fittedContentSize;
- (unsigned short)contentOffsetForIndex:centered: /* Error: Ran out of types for this method. */;
- (unsigned short)minimumTranslationToKillIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)scrollViewPagingEnabled;
- (unsigned short)interpageSpacingForPaging;
- (unsigned short)restingOffsetForScrollOffset:velocity: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAdjustedScrollingState;
- (unsigned short)adjustedOffsetForOffset:translation:startPoint:locationInView:horizontalVelocity:verticalVelocity: /* Error: Ran out of types for this method. */;
- (unsigned short)cardsNeedBackgroundWallpaperTreatment;
- (unsigned short)interpolatesDuringSwipeToKill;
- (unsigned short)centerYOffsetWhenPresented;
- (unsigned short)cardCornerRadiusInSwitcher;

@end
