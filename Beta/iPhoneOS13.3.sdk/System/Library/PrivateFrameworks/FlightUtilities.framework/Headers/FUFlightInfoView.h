/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <UIView.h>

@class FUFlight, FUFlightLeg, FULabel, FUSeparator, FUStyleProvider, NSLayoutConstraint, UIButton;

@protocol FUFlightInfoViewProtocol;

__attribute__((visibility("hidden")))
@interface FUFlightInfoView : UIView

{
    unsigned long long _displayedLegId;
    unsigned long long _style;
    FUStyleProvider *_styleProvider;
    _Bool _awake;
    _Bool _multiFlights;
    FUFlight *_flight;
    FUFlightLeg *_leg;
    id <FUFlightInfoViewProtocol> _delegate;
    long long _currentFocus;
    FULabel *_labelAirlineName;
    FULabel *_labelFlightCode;
    FULabel *_labelStatusTitle;
    FULabel *_labelStatus;
    FULabel *_labelDepartureCity;
    FULabel *_labelDepartureCode;
    FULabel *_labelDepartureInfo1;
    FULabel *_labelDepartureInfo2;
    FULabel *_labelArrivalCity;
    FULabel *_labelArrivalCode;
    FULabel *_labelArrivalInfo1;
    FULabel *_labelArrivalInfo2;
    FULabel *_labelDepartureTitle;
    FULabel *_labelDepartureDate;
    FULabel *_labelDepartureTime;
    FULabel *_labelDepartureDelay;
    FULabel *_labelArrivalTitle;
    FULabel *_labelArrivalDate;
    FULabel *_labelArrivalTime;
    FULabel *_labelArrivalDelay;
    FULabel *_labelDurationTitle;
    FULabel *_labelDurationValue;
    FULabel *_labelDurationComplete;
    FULabel *_labelBaggageClaimTitle;
    FULabel *_labelBaggageClaimValue;
    FUSeparator *_sep5;
    NSLayoutConstraint *_leadingInset;
    NSLayoutConstraint *_trailingInset;
    NSLayoutConstraint *_bottomMargin;
    NSLayoutConstraint *_departureDelayConstraint;
    NSLayoutConstraint *_departureTerminalConstraint;
    NSLayoutConstraint *_departureGateConstraint;
    NSLayoutConstraint *_arrivalDelayConstraint;
    NSLayoutConstraint *_arrivalTerminalConstraint;
    NSLayoutConstraint *_arrivalGateConstraint;
    UIButton *_flightButton;
}

@property (weak) UIButton *flightButton;
@property (nonatomic, readonly) FUFlight *flight;
@property (nonatomic, readonly) FUFlightLeg *leg;
@property (weak) id <FUFlightInfoViewProtocol> delegate;
@property long long currentFocus;
@property (weak) FULabel *labelAirlineName;
@property (weak) FULabel *labelFlightCode;
@property (weak) FULabel *labelStatusTitle;
@property (weak) FULabel *labelStatus;
@property (weak) FULabel *labelDepartureCity;
@property (weak) FULabel *labelDepartureCode;
@property (weak) FULabel *labelDepartureInfo1;
@property (weak) FULabel *labelDepartureInfo2;
@property (weak) FULabel *labelArrivalCity;
@property (weak) FULabel *labelArrivalCode;
@property (weak) FULabel *labelArrivalInfo1;
@property (weak) FULabel *labelArrivalInfo2;
@property (weak) FULabel *labelDepartureTitle;
@property (weak) FULabel *labelDepartureDate;
@property (weak) FULabel *labelDepartureTime;
@property (weak) FULabel *labelDepartureDelay;
@property (weak) FULabel *labelArrivalTitle;
@property (weak) FULabel *labelArrivalDate;
@property (weak) FULabel *labelArrivalTime;
@property (weak) FULabel *labelArrivalDelay;
@property (weak) FULabel *labelDurationTitle;
@property (weak) FULabel *labelDurationValue;
@property (weak) FULabel *labelDurationComplete;
@property (weak) FULabel *labelBaggageClaimTitle;
@property (weak) FULabel *labelBaggageClaimValue;
@property (weak) FUSeparator *sep5;
@property (retain, nonatomic) NSLayoutConstraint *leadingInset;
@property (retain, nonatomic) NSLayoutConstraint *trailingInset;
@property (retain, nonatomic) NSLayoutConstraint *bottomMargin;
@property (retain, nonatomic) NSLayoutConstraint *departureDelayConstraint;
@property (retain, nonatomic) NSLayoutConstraint *departureTerminalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *departureGateConstraint;
@property (retain, nonatomic) NSLayoutConstraint *arrivalDelayConstraint;
@property (retain, nonatomic) NSLayoutConstraint *arrivalTerminalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *arrivalGateConstraint;
@property (nonatomic) unsigned long long style;

+ (id)flightViewForStyle:(unsigned long long)arg1 compact:(_Bool)arg2;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)awakeFromNib;
- (void)tlk_updateForAppearance:(id)arg1;
- (double)standardTableCellContentInset;
- (void)setupLabelStylesWithStyle:(unsigned long long)arg1;
- (void)updateFlightDates;
- (void)updateFlightStatus;
- (void)updateForFollowupContent:(_Bool)arg1;
- (void)updateAirlineInformation;
- (void)updateLocationInfo;
- (void)updateFlightTerminalInfo;
- (void)updateDelayInfo;
- (void)updateFlightButtonIcon;
- (void)updateLabelVisibility:(id)arg1 constraint:(id)arg2;
- (id)formattedDurationForDuration:(double)arg1;
- (void)updateTimeLabel:(id)arg1 constraint:(id)arg2 withString:(id)arg3;
- (void)addDateTimeAttributesToString:(id)arg1 striked:(_Bool)arg2 alignment:(long long)arg3;
- (void)updateDateTimeForDeparture:(_Bool)arg1;
- (void)setFlight:(id)arg1 legIndex:(unsigned long long)arg2 multiFlights:(_Bool)arg3 spotlightMode:(_Bool)arg4;
- (void)flightButtonTapped:(id)arg1;

@end
