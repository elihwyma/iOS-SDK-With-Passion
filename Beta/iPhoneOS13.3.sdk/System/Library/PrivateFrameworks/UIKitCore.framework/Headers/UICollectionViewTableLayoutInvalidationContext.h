/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewTableLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

{
    _Bool _invalidateTableLayoutDelegateMetrics;
    _Bool _skipSectionInvalidation;
}

@property (nonatomic) _Bool invalidateTableLayoutDelegateMetrics;
@property (nonatomic) _Bool skipSectionInvalidation;

@end
