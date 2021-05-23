/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSTodayViewController, NSString, SBUISpotlightBarNavigationController, SPUISearchBarController;

@interface CSTodayContentViewController : CSCoverSheetViewControllerBase

{
    _Bool _bouncing;
    CSTodayViewController *_todayViewController;
    SBUISpotlightBarNavigationController *_spotlightNavigationController;
    SPUISearchBarController *_spotlightSearchBarViewController;
}

@property (retain, nonatomic) SBUISpotlightBarNavigationController *spotlightNavigationController;
@property (retain, nonatomic) SPUISearchBarController *spotlightSearchBarViewController;
@property (retain, nonatomic) CSTodayViewController *todayViewController;
@property (nonatomic, getter=isBouncing) _Bool bouncing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)viewClass;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)_updateSpotlightLegibility;
- (id)_todayContentView;

@end
