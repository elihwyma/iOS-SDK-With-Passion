/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSArray, NSIndexPath, NSLayoutConstraint, NSMutableArray, NSString, OBBoldTrayButton, UITableViewCell;

@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanUsesViewController : OBTableWelcomeController

{
    OBBoldTrayButton *_doneButton;
    _Bool _dataSwitchEnabled;
    _Bool _hasDoneButton;
    id <TSSIMSetupFlowDelegate> _delegate;
    unsigned long long _usesType;
    NSLayoutConstraint *_heightAnchor;
    UITableViewCell *_sectionFooter;
    NSIndexPath *_chosenUseIndexPath;
    NSMutableArray *_chosenUseIndexPaths;
    NSArray *_planItemBadges;
    NSArray *_selectedPlanItems;
}

@property _Bool hasDoneButton;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain) UITableViewCell *sectionFooter;
@property (retain) NSIndexPath *chosenUseIndexPath;
@property (retain) NSMutableArray *chosenUseIndexPaths;
@property (retain) NSArray *planItemBadges;
@property (retain) NSArray *selectedPlanItems;
@property (weak) id <TSSIMSetupFlowDelegate> delegate;
@property (nonatomic, readonly) unsigned long long usesType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_doneButtonTapped;
- (void)prepare:(CDUnknownBlockType)arg1;
- (void)dataSwitchChanged:(id)arg1;
- (void)saveDefaultUse:(CDUnknownBlockType)arg1;
- (id)initWithType:(unsigned long long)arg1 withDoneButton:(_Bool)arg2;

@end
