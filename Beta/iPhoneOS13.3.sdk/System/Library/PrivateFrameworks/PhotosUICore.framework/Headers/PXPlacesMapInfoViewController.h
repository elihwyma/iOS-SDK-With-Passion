/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class PXPlacesMapView;

@interface PXPlacesMapInfoViewController : UIViewController

{
    PXPlacesMapView *_mapView;
}

@property (weak) PXPlacesMapView *mapView;

- (void)viewDidLoad;
- (id)initWithMapView:(id)arg1;
- (void)tappedDone:(id)arg1;
- (void)tappedDimView:(id)arg1;
- (void)tapped3dButton:(id)arg1;
- (void)mapTypeChanged:(id)arg1;
- (long long)segmentIndexFor:(unsigned long long)arg1;

@end
