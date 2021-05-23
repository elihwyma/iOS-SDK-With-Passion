/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class NSString;

@protocol TSSIMSetupFlowDelegate;

@interface TSTransferredViewController : OBWelcomeController

{
    id <TSSIMSetupFlowDelegate> _delegate;
}

@property (weak) id <TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_doneButtonTapped;
- (void)_skipButtonTapped;
- (id)initWithTransferredPlan:(id)arg1;

@end
