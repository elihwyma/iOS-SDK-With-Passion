//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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

+ (id)_nameForMapItem:(id)arg1;
+ (id)_shortenedAddressForAddress:(id)arg1;
+ (void)_applyText:(id)arg1 fontSize:(double)arg2 color:(id)arg3 toLabel:(id)arg4;
+ (void)_applyBoldText:(id)arg1 fontSize:(double)arg2 color:(id)arg3 toLabel:(id)arg4;
+ (id)_multilineLabel;
@property(readonly, nonatomic) CPSRouteEstimatesView *estimatesView; // @synthesize estimatesView=_estimatesView;
@property(retain, nonatomic) CPTravelEstimates *currentTravelEstimates; // @synthesize currentTravelEstimates=_currentTravelEstimates;
@property(copy, nonatomic) NSString *routeNote; // @synthesize routeNote=_routeNote;
@property(readonly, nonatomic) CPSHidingLabel *routeNoteLabel; // @synthesize routeNoteLabel=_routeNoteLabel;
@property(readonly, nonatomic) CPSHidingLabel *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(readonly, nonatomic) UILabel *destinationName; // @synthesize destinationName=_destinationName;
@property(readonly, nonatomic) CPTrip *representedTrip; // @synthesize representedTrip=_representedTrip;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateTripEstimateStyle;
- (id)initWithFrame:(CGRect)arg1;

@end

