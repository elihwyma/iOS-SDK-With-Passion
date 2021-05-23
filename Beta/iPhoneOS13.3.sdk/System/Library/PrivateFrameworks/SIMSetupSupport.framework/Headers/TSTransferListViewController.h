/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, OBBoldTrayButton, UIView;

@protocol TSSIMSetupFlowDelegate;

@interface TSTransferListViewController : OBTableWelcomeController

{
    _Bool _isInEligiblePlanPresent;
    NSLayoutConstraint *_tableHeightAnchor;
    OBBoldTrayButton *_continueButton;
    id <TSSIMSetupFlowDelegate> _delegate;
    NSArray *_transferItems;
    NSLayoutConstraint *_heightAnchor;
    UIView *_tableFooter;
    NSMutableArray *_chosenUseIndexPaths;
}

@property (retain) NSArray *transferItems;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain) UIView *tableFooter;
@property (retain) NSMutableArray *chosenUseIndexPaths;
@property (weak) id <TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (_Bool)canBeShownFromSuspendedState;
- (void)_skipButtonTapped;
- (id)initWithTransferItems:(id)arg1;
- (void)_continueButtonTapped;
- (double)_heightAnchorConstant;
- (void)updateFooterView;
- (void)_preparePlanTransfer:(id)arg1 withDeviceID:(id)arg2;
- (void)_startPlanTransfer:(id)arg1 withDeviceID:(id)arg2;
- (void)updateTableData:(id)arg1 isInEligiblePlanPresent:(_Bool)arg2;

@end
