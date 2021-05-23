/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class FACircleContext;

@interface FARemoteServiceViewController : SBUIRemoteAlertServiceViewController

{
    FACircleContext *_circleContext;
}

- (void)viewWillAppear:(_Bool)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
