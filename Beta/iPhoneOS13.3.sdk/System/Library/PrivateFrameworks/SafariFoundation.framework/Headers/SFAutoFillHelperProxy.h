/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface SFAutoFillHelperProxy : NSObject

{
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg1 confirmPasswordRules:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getRemoteAutoFillAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
