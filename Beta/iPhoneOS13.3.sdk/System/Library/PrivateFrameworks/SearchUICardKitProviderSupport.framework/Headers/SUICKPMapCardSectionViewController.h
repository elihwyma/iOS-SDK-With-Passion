/*
 Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

#import <SearchUICardKitProviderSupport/SUICKPInteractiveCardSectionViewController.h>

@class CRKContainerCardSectionView, NSString, UIView;

@protocol CRKCardSectionView;

@interface SUICKPMapCardSectionViewController : SUICKPInteractiveCardSectionViewController

{
    _Bool _needsToLoadCardSectionView;
    _Bool _inTrackingRunLoopMode;
    UIView<CRKCardSectionView> *_mapSectionView;
    struct __CFRunLoopObserver *_mainRunLoopObserverRef;
}

@property (retain, nonatomic) CRKContainerCardSectionView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cardSectionClasses;

- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_updateContentSize;
- (void)didEngageCardSection:(id)arg1;
- (id)_mapCardSection;
- (void)_loadCardSectionView;
- (id)_initWithCardSection:(id)arg1;
- (void)_loadCardSectionViewIfNeeded;
- (void)_snapshotCardSectionView;
- (_Bool)_shouldAttemptToSnapshotMapView;
- (id)_viewSnapshot;
- (void)_loadMapCardSectionView;

@end
