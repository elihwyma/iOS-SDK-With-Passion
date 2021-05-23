/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, PXPeopleBootstrapContext, UILabel;

@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXPeopleBootstrapFinalViewController : UIViewController

{
    id _context;
    UILabel *_promptLabel;
    UILabel *_descriptionLabel;
}

@property (nonatomic, readonly) PXPeopleBootstrapContext *bootstrapContext;
@property (weak, nonatomic, readonly) UILabel *promptLabel;
@property (weak, nonatomic, readonly) UILabel *descriptionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id context;
@property (nonatomic, readonly) struct CGSize preferredSize;
@property (weak, nonatomic) id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;

- (id)initWithContext:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateUI;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)_localizedTitleString;
- (id)_localizedPromptString;
- (id)_localizedDescriptionString;

@end
