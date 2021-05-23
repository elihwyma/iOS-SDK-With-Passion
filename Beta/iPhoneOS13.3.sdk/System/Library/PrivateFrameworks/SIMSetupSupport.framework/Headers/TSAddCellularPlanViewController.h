/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class NSString;

@protocol TSSIMSetupFlowDelegate;

@interface TSAddCellularPlanViewController : OBWelcomeController

{
    _Bool _allowDismiss;
    id <TSSIMSetupFlowDelegate> _delegate;
}

@property (weak) id <TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (id)initWithType:(unsigned long long)arg1 allowDismiss:(_Bool)arg2;

@end
