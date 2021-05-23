/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <UIViewController.h>

@class FUFlightView, NSArray, NSDate, NSNumber, NSString;

@protocol FUFlightViewControllerDelegate;

@interface FUFlightViewController : UIViewController

{
    _Bool _loadingFlight;
    NSDate *_startLoadingDate;
    unsigned long long _displayStyle;
    id <FUFlightViewControllerDelegate> _delegate;
    _Bool _requiresDataLoad;
    _Bool _viewLoaded;
    FUFlightView *_regularFlightView;
    FUFlightView *_previewFlightView;
    _Bool _highlightCurrentFlightLeg;
    _Bool _showInfoPanel;
    NSArray *_flights;
    NSNumber *_flightCode;
    NSString *_airlineCode;
}

@property (retain) FUFlightView *regularFlightView;
@property (retain) FUFlightView *previewFlightView;
@property (retain) NSNumber *flightCode;
@property (retain) NSString *airlineCode;
@property (nonatomic, readonly) FUFlightView *flightView;
@property (retain, nonatomic) NSArray *flights;
@property (nonatomic) long long selectedFlight;
@property (nonatomic) long long selectedLeg;
@property (nonatomic) _Bool highlightCurrentFlightLeg;
@property (nonatomic) _Bool showInfoPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)awakeFromNib;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)setFlights:(id)arg1 selectedFlight:(long long)arg2 selectedLeg:(long long)arg3;
- (void)loadFlightWithFlightCode:(id)arg1 airlineCode:(id)arg2 date:(id)arg3;
- (void)showLoadingView;
- (void)showErrorView;
- (void)showFlightView;
- (void)showView:(id)arg1;
- (void)addFittingView:(id)arg1;
- (void)fadeLayer:(id)arg1 visible:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)flightView:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3;
- (id)initWithFlights:(id)arg1;
- (id)initWithSFFlights:(id)arg1;
- (id)initWithSFFlight:(id)arg1 leg:(long long)arg2 style:(unsigned long long)arg3 delegate:(id)arg4;
- (id)initWithFlightCode:(unsigned long long)arg1 airlineCode:(id)arg2;
- (void)setNoBackground;
- (void)hideView:(id)arg1;

@end
