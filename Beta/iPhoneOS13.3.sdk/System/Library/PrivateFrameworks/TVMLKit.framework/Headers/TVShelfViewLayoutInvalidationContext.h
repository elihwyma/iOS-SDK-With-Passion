/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@class NSIndexPath;

@interface TVShelfViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

{
    _Bool _invalidateLayout;
    _Bool _invalidateVerticalBumps;
    NSIndexPath *_focusedItemIndexPath;
}

@property (nonatomic) _Bool invalidateLayout;
@property (nonatomic) _Bool invalidateVerticalBumps;
@property (retain, nonatomic) NSIndexPath *focusedItemIndexPath;

@end
