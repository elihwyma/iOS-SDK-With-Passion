/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

__attribute__((visibility("hidden")))
@interface PUHorizontalCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

{
    _Bool _invalidateCachedLayout;
}

@property (nonatomic, setter=_setInvalidateCachedLayout:) _Bool invalidateCachedLayout;

@end
