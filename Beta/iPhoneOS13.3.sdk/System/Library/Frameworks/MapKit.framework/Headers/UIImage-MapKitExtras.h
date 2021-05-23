/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIImage.h>

@class NSString;

@interface UIImage (MapKitExtras)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_mapkit_imageNamed:(id)arg1;
+ (id)_mapkit_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)_mapkit_imageFromVKImage:(id)arg1;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 nightMode:(_Bool)arg4;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 withWidthPaddingMultiple:(double)arg4;

- (id)_mapkit_dimmedImage;
- (id)_mapkit_horizontallyFlippedImage;
- (id)_mapkit_templateImageWithTintColor:(id)arg1;
- (id)_mapkit_imageWithAlpha:(double)arg1;
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;

@end
