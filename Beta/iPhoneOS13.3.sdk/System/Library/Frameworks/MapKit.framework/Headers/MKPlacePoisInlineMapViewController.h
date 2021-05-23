/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceInlineMapViewController.h>

@class CLLocation, NSArray, NSString, _MKPlacePoisInlineMapContentView;

__attribute__((visibility("hidden")))
@interface MKPlacePoisInlineMapViewController : MKPlaceInlineMapViewController

{
    NSArray *_fetchedMapItems;
    _MKPlacePoisInlineMapContentView *_mapContentView;
    _Bool _resizableViewsDisabled;
    CLLocation *_location;
}

@property (retain, nonatomic) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool resizableViewsDisabled;

+ (id)inlineMapWithMapItem:(id)arg1 options:(unsigned long long)arg2;

- (void)loadView;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_updateMap;
- (long long)preferredUserInterfaceStyle;
- (void)_handleTapOnMap;
- (id)visibleMapItems;
- (void)fetchPoisForBrand;
- (id)geoCamera;

@end
