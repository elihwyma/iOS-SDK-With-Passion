/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class PXPeopleStatusView;

@protocol PXPeopleStatusViewDelegate;

@interface PXPeopleStatusViewController : UIViewController

{
    id <PXPeopleStatusViewDelegate> _delegate;
    PXPeopleStatusView *_statusView;
}

@property (retain, nonatomic) PXPeopleStatusView *statusView;
@property (weak, nonatomic) id <PXPeopleStatusViewDelegate> delegate;

- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)_continuePressed:(id)arg1;

@end
