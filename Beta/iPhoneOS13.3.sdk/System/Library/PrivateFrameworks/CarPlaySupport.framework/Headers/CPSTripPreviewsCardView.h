/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPRouteChoice, CPSCardPlatterView, CPTrip, CPTripPreviewTextConfiguration, NSArray, NSString, UIButton;

@protocol CPSTripInitiating;

@interface CPSTripPreviewsCardView : UIView

{
    NSArray *_trips;
    CPTripPreviewTextConfiguration *_textConfiguration;
    CPTrip *_selectedTrip;
    CPRouteChoice *_selectedRouteChoice;
    CPSCardPlatterView *_platterView;
    id <CPSTripInitiating> _tripDelegate;
    UIButton *_goButton;
}

@property (retain, nonatomic) CPTripPreviewTextConfiguration *textConfiguration;
@property (weak, nonatomic) CPTrip *selectedTrip;
@property (weak, nonatomic) CPRouteChoice *selectedRouteChoice;
@property (nonatomic, readonly) CPSCardPlatterView *platterView;
@property (weak, nonatomic, readonly) id <CPSTripInitiating> tripDelegate;
@property (nonatomic, readonly) UIButton *goButton;
@property (copy, nonatomic, readonly) NSArray *trips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (id)_linearFocusItems;
- (void)_updateButtonColors;
- (void)startTripButtonPressed:(id)arg1;
- (void)notifyDidSelectRouteChoice:(id)arg1;
- (id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3;
- (id)setupGoButton;
- (void)updateEstimates:(id)arg1 forTripIdentifier:(id)arg2;

@end
