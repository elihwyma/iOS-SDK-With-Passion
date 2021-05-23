/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIImage;

@protocol _MKPlaceReservationDelegate;

@interface _MKPlaceReservationInfo : NSObject

{
    NSString *_attributionProviderDisplayName;
    UIImage *_attributionProviderLogoImage;
    NSArray *_openTimes;
    id <_MKPlaceReservationDelegate> _reservationDelegate;
}

@property (copy, nonatomic, readonly) NSArray *openTimes;
@property (copy, nonatomic, readonly) NSString *attributionProviderDisplayName;
@property (nonatomic, readonly) UIImage *attributionProviderLogoImage;
@property (weak, nonatomic, readonly) id <_MKPlaceReservationDelegate> reservationDelegate;

- (id)initWithOpenTimes:(id)arg1 attributionProviderName:(id)arg2 providerLogoImage:(id)arg3 delegate:(id)arg4;

@end
