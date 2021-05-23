/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class PXPeopleScalableAvatarView, UIButton, UILabel;

@protocol PXPeopleMeViewControllerDataSource, PXPerson;

@interface PXPeopleMeViewController : UIViewController

{
    id <PXPeopleMeViewControllerDataSource> _dataSource;
    CDUnknownBlockType _dismissHandler;
    id <PXPerson> _suggestedPerson;
    UIButton *_confirmButton;
    UIButton *_denyButton;
    UILabel *_descriptionLabel;
    PXPeopleScalableAvatarView *_avatarView;
}

@property (retain) id <PXPerson> suggestedPerson;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *denyButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (nonatomic, readonly) id <PXPeopleMeViewControllerDataSource> dataSource;
@property (copy, nonatomic) CDUnknownBlockType dismissHandler;
@property (nonatomic, readonly) double preferredHeight;

- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)initWithDataSource:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;
- (id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 destructive:(_Bool)arg3;
- (void)_dismissViewControllerAsConfirmed:(_Bool)arg1;
- (void)_confirmMe:(id)arg1;
- (void)_rejectMe:(id)arg1;

@end
