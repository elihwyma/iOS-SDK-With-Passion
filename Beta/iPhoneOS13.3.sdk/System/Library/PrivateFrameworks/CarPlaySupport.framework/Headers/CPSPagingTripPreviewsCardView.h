/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSTripPreviewsCardView.h>

@class CPSHairlineBorderedView, CPSPagingControlView, CPSRouteOverviewView, NSLayoutConstraint, NSMutableDictionary, NSString, UIButton;

@interface CPSPagingTripPreviewsCardView : CPSTripPreviewsCardView

{
    _Bool _showMoreRoutes;
    NSMutableDictionary *_estimatesForTripIdentifiers;
    CPSPagingControlView *_pageControl;
    CPSRouteOverviewView *_overviewView;
    CPSHairlineBorderedView *_borderedAlternatesView;
    CPSHairlineBorderedView *_borderedGoButton;
    CPSHairlineBorderedView *_borderedMoreRoutesButton;
    UIButton *_moreRoutesButton;
    NSLayoutConstraint *_contentTopConstraint;
    NSLayoutConstraint *_contentBottomConstraint;
    NSLayoutConstraint *_alternateRoutesHeightConstraint;
    NSLayoutConstraint *_toggleRoutesButtonHeightConstraint;
}

@property (nonatomic, readonly) NSMutableDictionary *estimatesForTripIdentifiers;
@property (nonatomic, readonly) CPSPagingControlView *pageControl;
@property (nonatomic, readonly) CPSRouteOverviewView *overviewView;
@property (nonatomic, readonly) CPSHairlineBorderedView *borderedAlternatesView;
@property (nonatomic, readonly) CPSHairlineBorderedView *borderedGoButton;
@property (nonatomic, readonly) CPSHairlineBorderedView *borderedMoreRoutesButton;
@property (nonatomic, readonly) UIButton *moreRoutesButton;
@property (nonatomic) _Bool showMoreRoutes;
@property (retain, nonatomic) NSLayoutConstraint *contentTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *alternateRoutesHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toggleRoutesButtonHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)_linearFocusItems;
- (void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2;
- (void)pagingControlView:(id)arg1 didSelectPageIndex:(unsigned long long)arg2;
- (void)_updateButtonColors;
- (void)setSelectedRouteChoice:(id)arg1;
- (id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3;
- (void)setSelectedTrip:(id)arg1;
- (void)updateEstimates:(id)arg1 forTripIdentifier:(id)arg2;
- (void)_toggleMoreRoutesButtonPressed:(id)arg1;
- (void)_setOverviewCollapsed:(_Bool)arg1;

@end
