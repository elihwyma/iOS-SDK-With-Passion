/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, RemoteUIController, UIViewController;

@interface AAUIServerUIHookHandler : NSObject

{
    NSMutableArray *_hookIdentifiers;
    RemoteUIController *_remoteUIController;
    UIViewController *_presentingControllerOverride;
    NSArray *_serverHooks;
}

@property (retain, nonatomic) UIViewController *presentingControllerOverride;
@property (copy, nonatomic) NSArray *serverHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dismissObjectModelsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRemoteUIController:(id)arg1;
- (id)presentationContextForHook:(id)arg1;
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2;
- (id)initWithRemoteUIController:(id)arg1 hooks:(id)arg2;
- (void)_rebuildServerHookHandlers;
- (id)_responseDataForResult:(_Bool)arg1 withError:(id)arg2;
- (void)_reloadUIWithInfo:(id)arg1 attributes:(id)arg2 initiatingObjectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentPresenter;
- (id)_refreshRequestWithInfo:(id)arg1 initiatingObjectModel:(id)arg2 attributes:(id)arg3;
- (void)processServerResponse:(id)arg1;

@end
