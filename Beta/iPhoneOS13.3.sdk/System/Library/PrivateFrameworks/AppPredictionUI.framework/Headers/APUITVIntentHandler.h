/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <Foundation/NSObject.h>

@class APUIWFLIntentController, ATXAction, NSString;

@interface APUITVIntentHandler : NSObject

{
    ATXAction *_action;
    APUIWFLIntentController *_intentController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)executeTVActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)intentController:(id)arg1 requiresConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;
- (void)intentController:(id)arg1 requiresContinuingInAppForIntent:(id)arg2 proceedHandler:(CDUnknownBlockType)arg3;
- (void)intentController:(id)arg1 didHandleInteraction:(id)arg2;
- (void)intentController:(id)arg1 didFailWithError:(id)arg2 forInteraction:(id)arg3;
- (void)intentControllerDidFailAuthorizationCheck:(id)arg1;
- (id)initWithTVAction:(id)arg1 context:(long long)arg2;
- (void)_punchToAppWithIntent:(id)arg1;

@end
