/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UINavigationController.h>

@class NSString, SBSearchBar, UIViewController, _UILegibilitySettings;

@protocol SBUISearchBarControlling;

@interface SBUISpotlightBarNavigationController : UINavigationController

{
    _Bool _pullingToSearch;
    UIViewController<SBUISearchBarControlling> *_searchBarViewController;
    _UILegibilitySettings *_legibilitySettings;
}

@property (readonly) SBSearchBar *navigationBar;
@property (retain, nonatomic) UIViewController<SBUISearchBarControlling> *searchBarViewController;
@property (nonatomic, getter=isPullingToSearch) _Bool pullingToSearch;
@property (getter=isNavigationBarBottomTrailingCornerRounded) _Bool navigationBarBottomTrailingCornerRounded;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 searchBarViewController:(id)arg2;
- (void)setNavigationBarBlurProgress:(double)arg1 animated:(_Bool)arg2;

@end
