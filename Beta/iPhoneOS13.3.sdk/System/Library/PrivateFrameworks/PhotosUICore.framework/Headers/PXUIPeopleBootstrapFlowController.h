/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPeopleBootstrapFlowController.h>

@class PHPerson, PXPeopleBootstrapConfirmationViewController, PXPeopleBootstrapFinalViewController;

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController

{
    PXPeopleBootstrapConfirmationViewController *_confirmationViewController;
    PXPeopleBootstrapFinalViewController *_finalViewController;
}

@property (retain, nonatomic) PXPeopleBootstrapConfirmationViewController *confirmationViewController;
@property (retain, nonatomic) PXPeopleBootstrapFinalViewController *finalViewController;
@property (nonatomic, readonly) PHPerson *sourcePerson;

- (void)done:(id)arg1;
- (void)computeViewControllersForBootstrapFlow;
- (void)recomputeViewControllersForChangeInKeyPath:(id)arg1;
- (id)_postNamingViewController;

@end
