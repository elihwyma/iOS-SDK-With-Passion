/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIViewController.h>

@class GEOMapItemAttribution, NSString, UIView;

@protocol _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKAnnotatedItemListViewController : UIViewController

{
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
    UIViewController *_annotatedItemListViewController;
    GEOMapItemAttribution *_attribution;
    NSString *_headerTitle;
    UIView *_topHairlineSeparator;
    UIView *_bottomHairlineSeparator;
    double _viewControllerTopPadding;
    double _viewControllerBottomPadding;
    double _headerTopPadding;
}

@property (nonatomic, readonly) UIViewController *annotatedItemListViewController;
@property (nonatomic, readonly) GEOMapItemAttribution *attribution;
@property (copy, nonatomic, readonly) NSString *headerTitle;
@property (nonatomic, readonly) UIView *topHairlineSeparator;
@property (nonatomic, readonly) UIView *bottomHairlineSeparator;
@property (nonatomic, readonly) double viewControllerTopPadding;
@property (nonatomic, readonly) double viewControllerBottomPadding;
@property (nonatomic, readonly) double headerTopPadding;
@property (nonatomic, getter=isTopSeparatorHidden) _Bool topSeparatorHidden;
@property (nonatomic, getter=isBottomSeparatorHidden) _Bool bottomSeparatorHidden;
@property (weak, nonatomic) id <_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)infoCardThemeChanged;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithPictureItemContainer:(id)arg1 title:(id)arg2 attribution:(id)arg3;
- (id)initWithTextItemContainer:(id)arg1 title:(id)arg2 attribution:(id)arg3;
- (void)updateUIForTheme:(id)arg1;
- (void)captureUserAction:(int)arg1;
- (id)initWithChildViewController:(id)arg1 title:(id)arg2 attribution:(id)arg3;
- (void)openAttribution;

@end
