/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMapItem, MKPlaceAttributionCell, NSArray, NSAttributedString, NSString, _MKMapItemAttribution;

@protocol _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceAttributionViewController : MKPlaceSectionViewController

{
    _Bool _resizableViewsDisabled;
    NSArray *_urlStrings;
    MKMapItem *_mapItem;
    NSAttributedString *_attributionString;
    MKPlaceAttributionCell *_attributionCell;
    _MKMapItemAttribution *_attribution;
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
}

@property (retain, nonatomic) MKPlaceAttributionCell *attributionCell;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (copy, nonatomic) NSAttributedString *attributionString;
@property (retain, nonatomic) _MKMapItemAttribution *attribution;
@property (copy, nonatomic) NSArray *urlStrings;
@property (weak, nonatomic) id <_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool resizableViewsDisabled;

- (void)loadView;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)infoCardThemeChanged;
- (void)openURL;
- (void)updateLogo;
- (id)infoAttributionString;

@end
