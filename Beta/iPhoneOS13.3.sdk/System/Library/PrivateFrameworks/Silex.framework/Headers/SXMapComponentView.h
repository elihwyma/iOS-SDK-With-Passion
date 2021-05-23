/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaComponentView.h>

@class MKMapView, NSArray, NSCache, NSString, SXFullscreenCanvasViewController, SXMapSnapShotter, SXMediaEngageEvent, UIBarButtonItem, UIImageView, UISegmentedControl, UITapGestureRecognizer;

@protocol SXDocumentTitleProviding;

@interface SXMapComponentView : SXMediaComponentView

{
    MKMapView *_mapView;
    UITapGestureRecognizer *_tapGesture;
    NSArray *_annotations;
    id <SXDocumentTitleProviding> _documentTitleProvider;
    UIBarButtonItem *_doneBarButtonItem;
    SXFullscreenCanvasViewController *_fullScreenCanvasViewController;
    UISegmentedControl *_segmentedControl;
    NSArray *_toolbarItems;
    SXMapSnapShotter *_snapShotter;
    UIImageView *_imageView;
    CDUnknownBlockType _snapShotCancelHandler;
    NSCache *_cachedSnapshots;
    SXMediaEngageEvent *_activeMediaEngageEvent;
    CDStruct_02837cd9 _mapRect;
}

@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) NSArray *annotations;
@property (nonatomic, readonly) id <SXDocumentTitleProviding> documentTitleProvider;
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property (retain, nonatomic) SXFullscreenCanvasViewController *fullScreenCanvasViewController;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) NSArray *toolbarItems;
@property (nonatomic, readonly) SXMapSnapShotter *snapShotter;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) CDStruct_02837cd9 mapRect;
@property (copy, nonatomic) CDUnknownBlockType snapShotCancelHandler;
@property (nonatomic, readonly) NSCache *cachedSnapshots;
@property (retain, nonatomic) SXMediaEngageEvent *activeMediaEngageEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (CDStruct_2b0c6e0b)region;
- (void)traitCollectionDidChange:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)discardContents;
- (void)memoryWarning:(id)arg1;
- (void)setupToolbar;
- (void)mapTypeChanged:(id)arg1;
- (void)fullScreenCanvasViewControllerWantsToDismiss:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 documentTitleProvider:(id)arg7;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (void)submitEvents;
- (unsigned long long)analyticsMediaType;
- (void)submitMediaEngageCompleteEvent;
- (_Bool)isPresentingFullscreen;
- (void)createSnapShot;
- (void)cancelSnapShot;
- (void)configureMapView;
- (void)setupNavigationBar;
- (void)enableMapViewInteraction:(_Bool)arg1;
- (void)createMediaEngageEvent;
- (id)mapTitle;
- (void)finishMediaEngageEvent;
- (_Bool)hasSelectedAnnotations;
- (_Bool)areBarsHidden;
- (void)presentFullScreen;
- (void)dismissFullScreen;
- (void)handleDoneTap:(id)arg1;
- (unsigned long long)segmentIndexForMapType:(unsigned long long)arg1;
- (unsigned long long)mapTypeForSegmentIndex:(unsigned long long)arg1;
- (_Bool)isUserInteractingWithMap;

@end
