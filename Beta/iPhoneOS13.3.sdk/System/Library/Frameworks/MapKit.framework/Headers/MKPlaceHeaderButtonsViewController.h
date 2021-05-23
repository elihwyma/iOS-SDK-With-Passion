/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKPlaceHeaderButton, MKPlaceSectionRowView, NSArray, NSAttributedString, NSString, _MKPlaceActionButtonController;

@protocol GEOTransitLineItem, MKPlaceHeaderButtonsViewControllerDelegate, _MKPlaceItem;

__attribute__((visibility("hidden")))
@interface MKPlaceHeaderButtonsViewController : MKPlaceSectionViewController

{
    MKPlaceSectionRowView *_buttonsContainerView;
    NSArray *_constraints;
    MKPlaceHeaderButton *_primaryButton;
    MKPlaceHeaderButton *_secondaryButton;
    NSAttributedString *_primaryAttributedString;
    NSString *_currentETAString;
    _Bool _resizableViewsDisabled;
    id <_MKPlaceItem> _placeItem;
    id <GEOTransitLineItem> _lineItem;
    id <MKPlaceHeaderButtonsViewControllerDelegate> _delegate;
    unsigned long long _primaryButtonType;
    _MKPlaceActionButtonController *_secondaryButtonController;
}

@property (retain, nonatomic) id <_MKPlaceItem> placeItem;
@property (retain, nonatomic) id <GEOTransitLineItem> lineItem;
@property (weak, nonatomic) id <MKPlaceHeaderButtonsViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long primaryButtonType;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool resizableViewsDisabled;

- (id)init;
- (void)_commonInit;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_contentSizeDidChange;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)ETAProviderUpdated:(id)arg1;
- (void)setConstraints;
- (void)setupPrimaryButton;
- (id)updateButton:(id)arg1 withController:(id)arg2;
- (id)directionAttributedStringWithETAString;
- (id)rerouteAttributedString;
- (id)attributedStringWith:(id)arg1;
- (id)etaStringFor:(unsigned long long)arg1 travelTime:(double)arg2;
- (_Bool)shouldStackForButtons:(id)arg1;
- (void)primaryButtonSelected:(id)arg1;
- (id)primaryAttributedString;

@end
