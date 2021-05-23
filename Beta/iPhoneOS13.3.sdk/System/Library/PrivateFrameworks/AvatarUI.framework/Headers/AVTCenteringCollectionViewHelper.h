/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTCenteringCollectionViewHelper : NSObject

+ (struct CGPoint)contentOffsetForCenteringPoint:(struct CGPoint)arg1 collectionView:(id)arg2;
+ (id)indexPathForNearestItemToCenterWithOffset:(struct CGPoint)arg1 collectionView:(id)arg2;
+ (struct UIEdgeInsets)insetsForBounds:(struct CGRect)arg1 withFirstCellSize:(struct CGSize)arg2 lastCellSize:(struct CGSize)arg3;
+ (id)indexPathForItemBeingScrolledTowardFromOffset:(struct CGPoint)arg1 currentOffset:(struct CGPoint)arg2 nearestItemToCenter:(id)arg3 itemCount:(unsigned long long)arg4 itemOffsetProvider:(CDUnknownBlockType)arg5 ratio:(double *)arg6;

@end
