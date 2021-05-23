/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

{
    _Bool _invalidateIncrementalReveal;
    _Bool _invalidateBoundsChange;
    _Bool _invalidatePlaceholderVisibility;
    _Bool _invalidatePinnableAreas;
}

@property (nonatomic) _Bool invalidateIncrementalReveal;
@property (nonatomic) _Bool invalidateBoundsChange;
@property (nonatomic) _Bool invalidatePlaceholderVisibility;
@property (nonatomic) _Bool invalidatePinnableAreas;

@end
