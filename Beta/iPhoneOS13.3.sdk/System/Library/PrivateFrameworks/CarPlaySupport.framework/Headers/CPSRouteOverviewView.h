/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPSHidingLabel, CPSRouteEstimatesView, CPTravelEstimates, CPTrip, NSString, UILabel;

@interface CPSRouteOverviewView : UIView

{
    CPTrip *_representedTrip;
    UILabel *_destinationName;
    CPSHidingLabel *_destinationAddress;
    CPSHidingLabel *_routeNoteLabel;
    NSString *_routeNote;
    CPTravelEstimates *_currentTravelEstimates;
    CPSRouteEstimatesView *_estimatesView;
}

@property (nonatomic, readonly) CPTrip *representedTrip;
@property (nonatomic, readonly) UILabel *destinationName;
@property (nonatomic, readonly) CPSHidingLabel *destinationAddress;
@property (nonatomic, readonly) CPSHidingLabel *routeNoteLabel;
@property (copy, nonatomic) NSString *routeNote;
@property (retain, nonatomic) CPTravelEstimates *currentTravelEstimates;
@property (nonatomic, readonly) CPSRouteEstimatesView *estimatesView;

+ (id)_multilineLabel;
+ (id)_nameForMapItem:(id)arg1;
+ (void)_applyBoldText:(id)arg1 fontSize:(double)arg2 color:(id)arg3 toLabel:(id)arg4;
+ (id)_shortenedAddressForAddress:(id)arg1;
+ (void)_applyText:(id)arg1 fontSize:(double)arg2 color:(id)arg3 toLabel:(id)arg4;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateTripEstimateStyle;
- (void)setRepresentedTrip:(id)arg1;

@end
