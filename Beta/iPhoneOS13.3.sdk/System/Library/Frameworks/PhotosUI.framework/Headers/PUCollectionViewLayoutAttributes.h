/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

__attribute__((visibility("hidden")))
@interface PUCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

{
    struct CGPoint _parallaxOffset;
    struct CGPoint _edgeParallaxOffset;
}

@property (nonatomic) struct CGPoint parallaxOffset;
@property (nonatomic) struct CGPoint edgeParallaxOffset;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
