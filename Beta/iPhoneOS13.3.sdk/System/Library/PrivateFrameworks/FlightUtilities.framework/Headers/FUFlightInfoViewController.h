/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <UIViewController.h>

@class FUFlightInfoView;

__attribute__((visibility("hidden")))
@interface FUFlightInfoViewController : UIViewController

{
    FUFlightInfoView *_flight;
    unsigned long long _style;
}

- (void)setStyle:(unsigned long long)arg1;
- (void)loadView;
- (id)initWithStyle:(unsigned long long)arg1;
- (_Bool)_canShowWhileLocked;
- (id)flightInfoView;

@end
