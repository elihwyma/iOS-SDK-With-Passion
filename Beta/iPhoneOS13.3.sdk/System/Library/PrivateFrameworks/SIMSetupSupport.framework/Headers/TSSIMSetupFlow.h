/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol TSSIMSetupDelegate;

@interface TSSIMSetupFlow : NSObject

{
    id <TSSIMSetupDelegate> _delegate;
}

@property (weak) id <TSSIMSetupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)initWithOptions:(id)arg1;
+ (id)initWithAppName:(id)arg1 requireSetup:(_Bool)arg2 skipGeneralInstallConsent:(_Bool)arg3;
+ (void)needsToRun:(CDUnknownBlockType)arg1;
+ (void)needsToRunUsingMessageSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)initWithSetupFlowWithIccid:(id)arg1 showAddPlan:(_Bool)arg2;
+ (id)initActivationCodeRequireSetup:(_Bool)arg1;
+ (id)initWithAppName:(id)arg1 requireSetup:(_Bool)arg2;
+ (id)initWithActivationCodeOnlyFlow;

- (void)receivedResponse;
- (id)firstViewController;
- (void)waitForResponse:(id)arg1;
- (void)userDidTapCancel;
- (void)viewControllerDidComplete:(id)arg1;
- (id)nextViewControllerFrom:(id)arg1;
- (void)navigateToNextPaneFrom:(id)arg1 navigationController:(id)arg2;
- (void)firstViewController:(CDUnknownBlockType)arg1;

@end
