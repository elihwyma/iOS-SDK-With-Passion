/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, PXPeopleProgressManager, PXPeopleSectionedDataSource, PXPeopleStatusViewController;

@interface PXPeopleOnboardingViewController : UIViewController

{
    unsigned long long _onboardStatus;
    PXPeopleProgressManager *_progressManager;
    PXPeopleStatusViewController *_statusViewController;
    PXPeopleSectionedDataSource *_peopleDataSource;
}

@property (nonatomic) unsigned long long onboardStatus;
@property (retain, nonatomic) PXPeopleProgressManager *progressManager;
@property (retain, nonatomic) PXPeopleStatusViewController *statusViewController;
@property (retain, nonatomic) PXPeopleSectionedDataSource *peopleDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)statusViewControllerEnterButtonTapped:(id)arg1;
- (id)initWithDataSource:(id)arg1 progressManager:(id)arg2;
- (void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2;
- (void)_updateStatusViewForStatus:(unsigned long long)arg1 progress:(double)arg2;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)peopleHomeController;
- (void)_pushToPeopleHome:(id)arg1;
- (void)_progressChanged:(id)arg1;

@end
