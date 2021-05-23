/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKStackingViewController.h>

@class GEOAutomobileOptions, GEOTransitOptions, MKETAProvider, MKInfoCardLoadingView, MKMapItem, MKNearestStationViewController, MKPlaceActionManager, MKPlaceCardActionItem, MKPlaceCardActionsViewController, MKPlaceCardHeaderViewController, MKPlaceHeaderButtonsViewController, NSNumber, NSString;

@protocol GEOTransitLineItem, MKLocationManagerOperation, MKMapServiceTicket, MKTransitLineItemViewControllerDelegate, UIScrollViewDelegate;

@interface MKTransitLineItemViewController : MKStackingViewController

{
    MKPlaceCardHeaderViewController *_headerViewController;
    MKPlaceHeaderButtonsViewController *_buttonsHeaderController;
    MKETAProvider *_etaProvider;
    MKInfoCardLoadingView *_loadingView;
    MKNearestStationViewController *_nearestStationViewController;
    id <MKLocationManagerOperation> _locationOperation;
    id <MKMapServiceTicket> _nearestStationTicket;
    MKMapItem *_nearestStation;
    unsigned long long _lastRequestedNearestID;
    NSString *_lastNearestRequestErrorMessage;
    MKPlaceActionManager *_actionManager;
    MKPlaceCardActionsViewController *_actionsViewController;
    _Bool _loading;
    id <GEOTransitLineItem> _transitLineItem;
    id <MKTransitLineItemViewControllerDelegate> _delegate;
    NSNumber *_favorited;
    MKPlaceCardActionItem *_addToFavoritesItem;
    MKPlaceCardActionItem *_removeFromFavoritesItem;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
    id <UIScrollViewDelegate> _scrollViewDelegate;
}

@property (retain, nonatomic) NSNumber *favorited;
@property (retain, nonatomic) MKPlaceCardActionItem *addToFavoritesItem;
@property (retain, nonatomic) MKPlaceCardActionItem *removeFromFavoritesItem;
@property (nonatomic, readonly) id <GEOTransitLineItem> transitLineItem;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (weak, nonatomic) id <MKTransitLineItemViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (weak, nonatomic) id <UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) double contentAlpha;

+ (double)headerHeightInMinimalMode;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setLoading:(_Bool)arg1;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;
- (id)initWithTransitLineItem:(id)arg1;
- (void)setContentVisibility:(long long)arg1;
- (void)_updateViewControllers;
- (void)hideTitle:(_Bool)arg1;
- (void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3;
- (double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3;
- (void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1;
- (double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1;
- (int)mapTypeForETAProvider:(id)arg1;
- (void)placeHeaderButtonsViewController:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withView:(id)arg3;
- (void)placeActionManager:(id)arg1 didSelectShareFromView:(id)arg2;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2;
- (void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(id)arg1;
- (void)setTransitLineItem:(id)arg1;
- (void)_fetchNearestStation;
- (void)nearestStationViewControllerDidSelectStation:(id)arg1;
- (void)transitLineIncidentsViewController:(id)arg1 didSelectDetailsForIncidents:(id)arg2;
- (void)setTransitLineItem:(id)arg1 loading:(_Bool)arg2;
- (void)resetNearestStation;
- (void)placeCardActionControllerDidSelectAddToCollection:(id)arg1;

@end
