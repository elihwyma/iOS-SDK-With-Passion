/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <SIMSetupSupport/TSSIMSetupFlow.h>

@class NSMutableArray, NSString, UIBarButtonItem;

@interface TSSetupAssistantSIMSetupFlow : TSSIMSetupFlow

{
    _Bool _showAddPlan;
    NSMutableArray *_danglingPlanItems;
    NSString *_iccid;
    UIBarButtonItem *_cancelButton;
    NSMutableArray *_currentItemsForIMessage;
}

@property (retain) NSMutableArray *currentItemsForIMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)needsToRun:(CDUnknownBlockType)arg1;

- (id)firstViewController;
- (void)viewControllerDidComplete:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (id)initWithIccid:(id)arg1 showAddPlan:(_Bool)arg2 allowDismiss:(_Bool)arg3;
- (id)nextViewControllerFrom:(id)arg1;

@end
