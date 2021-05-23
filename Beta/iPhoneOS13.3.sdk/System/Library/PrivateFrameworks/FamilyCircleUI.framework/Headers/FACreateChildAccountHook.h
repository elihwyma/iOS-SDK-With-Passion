/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class AAUIServerHookResponse, FAChildAccountCreationController, NSString, UIViewController;

@protocol AAUIServerHookDelegate;

@interface FACreateChildAccountHook : NSObject

{
    CDUnknownBlockType _completion;
    FAChildAccountCreationController *_childCreateController;
    UIViewController *_initialViewController;
    id <AAUIServerHookDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (weak, nonatomic) id <AAUIServerHookDelegate> delegate;

- (id)_presentationContext;
- (_Bool)shouldMatchElement:(id)arg1;
- (_Bool)shouldMatchModel:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct NSDictionary *)accountsForAccountManager:(id)arg1;
- (void)_handleCreateChildAccount:(CDUnknownBlockType)arg1;
- (void)_callCompletion:(_Bool)arg1 error:(id)arg2;
- (void)_tearDownChildAccountCreateController:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)childAccountCreationController:(id)arg1 didLoadRemoteUIWithSuccess:(_Bool)arg2;
- (void)childAccountCreationController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;
- (id)navigationItemToShowInitialLoadingForChildAccountCreationController:(id)arg1;

@end
