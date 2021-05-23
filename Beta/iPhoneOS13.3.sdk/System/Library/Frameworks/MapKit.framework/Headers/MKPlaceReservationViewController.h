/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKPlaceReservationRowView, NSString, _MKPlaceReservationInfo;

__attribute__((visibility("hidden")))
@interface MKPlaceReservationViewController : MKPlaceSectionViewController

{
    MKPlaceReservationRowView *_reservationCell;
    _MKPlaceReservationInfo *_reservationInfo;
}

@property (retain, nonatomic) _MKPlaceReservationInfo *reservationInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_updateReservationInfoAnimated:(_Bool)arg1;

@end
