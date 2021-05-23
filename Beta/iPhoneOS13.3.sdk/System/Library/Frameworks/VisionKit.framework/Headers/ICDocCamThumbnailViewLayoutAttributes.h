/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailViewLayoutAttributes : UICollectionViewLayoutAttributes

{
    _Bool _renderShadow;
    _Bool _renderBorder;
    double _imageWidth;
    double _imageHeight;
}

@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) _Bool renderShadow;
@property (nonatomic) _Bool renderBorder;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
