/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMapItem, NSArray, NSString, UIView;

@protocol MKPlaceQuickLinksViewControllerDelegate, _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceQuickLinksViewController : MKPlaceSectionViewController

{
    NSArray *_quickLinks;
    NSArray *_quickLinkViews;
    UIView *_contentView;
    unsigned long long _maxButtonsPerRow;
    NSArray *_constraints;
    MKMapItem *_mapItem;
    id <MKPlaceQuickLinksViewControllerDelegate> _delegate;
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id <MKPlaceQuickLinksViewControllerDelegate> delegate;
@property (weak, nonatomic) id <_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)placeQuickLinksViewControllerFor:(id)arg1;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)createConstraints;
- (void)infoCardThemeChanged;
- (void)quickLinkItemViewSelected:(id)arg1;
- (void)createActionViews;
- (unsigned long long)maxButtonsPerRow;
- (void)layoutButtons;
- (void)_captureTapActionWithQuickLink:(id)arg1;

@end
