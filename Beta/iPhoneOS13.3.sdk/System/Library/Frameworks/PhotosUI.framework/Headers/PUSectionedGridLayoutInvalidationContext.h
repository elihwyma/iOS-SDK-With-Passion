/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

__attribute__((visibility("hidden")))
@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

{
    _Bool _invalidateForVerticalScroll;
    _Bool _sectioningIsPreserved;
    _Bool _samplingIsPreserved;
    _Bool _invalidationHasBeenRedispatched;
}

@property (nonatomic) _Bool invalidateForVerticalScroll;
@property (nonatomic) _Bool sectioningIsPreserved;
@property (nonatomic) _Bool samplingIsPreserved;
@property (nonatomic) _Bool invalidationHasBeenRedispatched;

- (id)description;

@end
