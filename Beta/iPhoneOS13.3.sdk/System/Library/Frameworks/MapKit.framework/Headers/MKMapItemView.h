/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class MKMapItem, MKMapSnapshotView, MKMuninContainerView, NSError, NSLayoutConstraint, NSMutableArray, NSString, NSTimer;

@interface MKMapItemView : UIView

{
    MKMuninContainerView *_muninContainerView;
    NSMutableArray *_muninConstraints;
    MKMapSnapshotView *_snapshotView;
    CDStruct_951efa70 _coordinateSpan;
    CDUnknownBlockType _mapItemloadedCompletionHandler;
    NSMutableArray *_snapshotConstraints;
    NSLayoutConstraint *_snapshotWidthConstraint;
    NSError *_snapshotError;
    NSTimer *_loadTimeoutTimer;
    struct CGSize _sizeWhenLastLoaded;
    _Bool _loadCalledOnce;
    unsigned long long _signpostID;
    _Bool _loadingMuninView;
    _Bool _shouldResolveMapItem;
    _Bool _shouldShowBorders;
    MKMapItem *_mapItem;
}

@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic) _Bool shouldResolveMapItem;
@property (nonatomic) _Bool shouldShowBorders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_setupObserver;
- (void)_resetState;
- (id)_annotationView;
- (void)infoCardThemeChanged;
- (void)triggerAnimation;
- (void)loadMapItem:(id)arg1 coordinateSpan:(CDStruct_c3b9c2ee)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateBorders;
- (void)_callCompletionHandler;
- (CDStruct_c3b9c2ee)_clampCoordinateSpan:(CDStruct_c3b9c2ee)arg1;
- (void)_takeSnapshotCompleted;
- (void)_takeSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1 isReload:(_Bool)arg2;
- (void)_getParentItem;
- (void)_fetchMuninViewforMapItem:(id)arg1;
- (_Bool)shouldHideMuninForParsec;
- (void)_handleTapOnMuninView:(id)arg1;
- (void)_setupMuninConstraints;
- (void)_handleTapOnSnapshot:(id)arg1;
- (void)_setupSnapshotConstraints;
- (id)_deriveSnapshotOptions:(_Bool)arg1;
- (void)_reloadSnapshot;
- (id)_customAnnotation;
- (void)_receivedFullyDrawnNotification:(id)arg1;
- (void)_renderMapItem;
- (void)_resetMuninContainerViewState;

@end
