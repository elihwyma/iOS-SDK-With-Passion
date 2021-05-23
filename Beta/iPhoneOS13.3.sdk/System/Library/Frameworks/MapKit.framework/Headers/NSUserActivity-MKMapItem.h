/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSUserActivity.h>

@class MKMapItem;

@interface NSUserActivity (MKMapItem)

@property (retain, nonatomic) MKMapItem *mapItem;

- (void)_mapkit_populateFieldsForDonationOfMapItem:(id)arg1;
- (void)_mapkit_clearMapItemDonationFields;

@end
