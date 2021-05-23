/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class UIImage, UITraitCollection, VKMapSnapshot;

@interface MKMapSnapshot : NSObject

{
    VKMapSnapshot *_snapshot;
    UIImage *_image;
    UITraitCollection *_traitCollection;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

+ (id)createSnapshotWithOptions:(id)arg1 timeoutInSeconds:(long long)arg2;

- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D)arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)_prepareForRenderWithAnnotationViews:(id)arg1;
- (void)_displayAppleLogoForMapType:(unsigned long long)arg1 withScale:(double)arg2 forDarkMode:(_Bool)arg3;
- (id)_initWithSnapshot:(id)arg1 traitCollection:(id)arg2;
- (struct CLLocationCoordinate2D)_coordinateForPoint:(struct CGPoint)arg1;
- (_Bool)_hasNoDataPlaceholders;

@end
