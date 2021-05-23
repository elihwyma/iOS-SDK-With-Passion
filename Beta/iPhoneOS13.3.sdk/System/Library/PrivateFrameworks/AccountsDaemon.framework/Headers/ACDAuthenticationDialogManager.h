/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACDQueueDictionary, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface ACDAuthenticationDialogManager : NSObject

{
    NSXPCListener *_authenticationDialogListener;
    ACDQueueDictionary *_dialogRequestQueues;
    NSString *_activeAccountID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)contextForAuthenticationDialog:(CDUnknownBlockType)arg1;
- (void)authenticationDialogDidFinishWithSuccess:(_Bool)arg1 response:(id)arg2;
- (void)authenticationDialogCrashed;
- (void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1;

@end
