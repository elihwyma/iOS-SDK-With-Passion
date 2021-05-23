/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class NSArray, NSString;

@protocol GEOMapItemVenueContents;

__attribute__((visibility("hidden")))
@interface MKPlaceVenueInfoContentsViewController : MKPlaceSectionViewController

{
    id <GEOMapItemVenueContents> _venueContents;
    NSArray *_labels;
}

@property (retain, nonatomic) id <GEOMapItemVenueContents> venueContents;
@property (retain, nonatomic) NSArray *labels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)venueInfoContentsViewControllerWithMapItem:(id)arg1;
+ (_Bool)isVisibleWithMapItem:(id)arg1;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)infoCardThemeChanged;
- (id)initWithVenueContents:(id)arg1;
- (id)labelWithTitle:(id)arg1;
- (id)rowWithLeftLabel:(id)arg1 rightLabel:(id)arg2;
- (void)updateLabelsProperties;

@end
