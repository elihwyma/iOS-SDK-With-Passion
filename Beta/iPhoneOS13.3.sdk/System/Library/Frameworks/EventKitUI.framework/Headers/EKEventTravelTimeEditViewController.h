/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class EKCalendarItem, EKEventStore, EKStructuredLocation, EKTravelRouteEstimationController, NSDate, NSIndexPath, NSString, UISwitch, UITableView, UIView;

@interface EKEventTravelTimeEditViewController : EKEditItemViewController

{
    struct CGRect _initFrame;
    EKCalendarItem *_calendarItem;
    EKEventStore *_eventStore;
    UITableView *_table;
    NSIndexPath *_checkedItem;
    UISwitch *_switchControl;
    long long _travelTimeSelectedChoice;
    double _customTravelTimeDuration;
    _Bool _estimationGroupIsShowing;
    _Bool _customTimesGroupIsShowing;
    _Bool _externallySetValueGroupIsShowing;
    _Bool _isAnimatingTableSections;
    _Bool _pendingReloadData;
    NSString *_routeEstimationErrorMessage;
    _Bool _isOriginSelectionVisible;
    _Bool _suppressErrors;
    _Bool _estimatedRowIsChecked;
    EKTravelRouteEstimationController *_routeEstimationControler;
    long long _selectedRoutingMode;
    long long _originalSelectedRoutingMode;
    double _originalSelectedTravelTime;
    UIView *_shadowView;
    double _selectedTravelTime;
    NSDate *_arrivalDate;
    EKStructuredLocation *_originStructuredLocation;
    EKStructuredLocation *_destinationStructuredLocation;
}

@property (nonatomic) double selectedTravelTime;
@property (nonatomic) long long selectedRoutingMode;
@property (retain, nonatomic) NSDate *arrivalDate;
@property (retain, nonatomic) EKStructuredLocation *originStructuredLocation;
@property (retain, nonatomic) EKStructuredLocation *destinationStructuredLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_travelTimeLocalizedString;
+ (id)_startingLocationLocalizedString;
+ (id)_cannotProvideDirectionsLocalizedString;
+ (id)_okLocalizedString;
+ (id)_directionsCouldNotBeFoundLocalizedString;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (void)_contentCategorySizeChanged:(id)arg1;
- (void)_checkItemAtIndexPath:(id)arg1;
- (void)setCell:(id)arg1 checked:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;
- (void)routeEstimationControllerDidBeginOriginLocationLookup:(id)arg1;
- (void)routeEstimationControllerDidFinishOriginLocationLookup:(id)arg1;
- (void)routeEstimationControllerDidBeginTravelTimeLookup:(id)arg1;
- (void)routeEstimationControllerDidFinishTravelTimeLookup:(id)arg1;
- (id)_routeEstimationControler;
- (void)_handleOriginLocationErrorsWithAlert:(_Bool)arg1;
- (void)_travelTimeActivationSwitchChanged:(id)arg1;
- (_Bool)_showingOptionsInitialState;
- (void)_updateVisibleSections;
- (void)_autoselectFromAvailableChoices;
- (void)_layoutShadowView;
- (void)_updateTableView;
- (long long)_numberOfEstimatedTravelTimeResultRows;
- (unsigned long long)_customTravelTimeSection;
- (_Bool)_showingOptions;
- (void)_locationsChanged;
- (id)_indexPathForSelectedTravelTime;
- (void)setTravelTimeSelectedChoice:(long long)arg1;
- (void)_setEstimationActive:(_Bool)arg1;
- (void)_showRouteEstimationAlert;
- (void)_handleEstimationControllerTravelTimeLookupErrors;
- (_Bool)_shouldAutoSelectEstimatedTravelTimeOnLookupCompletion;
- (void)setTravelTimeSelectedChoiceToFirstValidEstimatedRow;
- (id)_errorStringForMapKitErrorCode:(unsigned long long)arg1;
- (_Bool)setTravelTimeSelectedChoiceEstimatedRowAtIndex:(unsigned long long)arg1;
- (unsigned long long)_externallySetValueTravelTimeSection;
- (unsigned long long)_toggleSwitchSection;
- (unsigned long long)_estimatedTravelTimeSection;
- (id)_stringForOriginLocation;
- (void)_originLocationButtonWasTapped;
- (long long)travelTimeSelectedChoice;

@end
