/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

{
    struct {
        unsigned int invalidateDelegateMetrics:1;
        unsigned int invalidateAttributes:1;
    } _flowLayoutInvalidationFlags;
}

@property (nonatomic) _Bool invalidateFlowLayoutDelegateMetrics;
@property (nonatomic) _Bool invalidateFlowLayoutAttributes;

- (id)init;

@end
