/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class ACUIAccountOperationsHelper, NSString, UIViewController;

@protocol AAUISignInOperationDelegate;

@interface AAUISignInOperationManager : NSObject

{
    ACUIAccountOperationsHelper *_accountOperationsHelper;
    id <AAUISignInOperationDelegate> _delegate;
    UIViewController *_presentingViewController;
}

@property (weak, nonatomic) id <AAUISignInOperationDelegate> delegate;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithPresentingViewController:(id)arg1;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)signInAccount:(id)arg1 enablingDataclasses:(_Bool)arg2;
- (void)_refreshEnabledDataclassesForAccount:(id)arg1;
- (void)_delegate_signInOperationManagerDidSaveAccount:(id)arg1 error:(id)arg2;
- (id)_dataclassMergeActionPickerFromPicker:(id)arg1;
- (void)_mainQueue_dataclassActionsForPicker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_alertControllerForPicker:(id)arg1;
- (void)_disableDataclasses:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
