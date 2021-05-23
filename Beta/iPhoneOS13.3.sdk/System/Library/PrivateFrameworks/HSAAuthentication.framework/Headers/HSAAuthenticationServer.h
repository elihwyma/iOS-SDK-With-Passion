/*
 Image: /System/Library/PrivateFrameworks/HSAAuthentication.framework/HSAAuthentication
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_xpc_object;

@interface HSAAuthenticationServer : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_clients;
    _Bool _hasRegistered;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_cleanup;
- (void)_cleanupClient:(id)arg1;
- (void)_configureWithClient:(id)arg1;
- (void)_clientConnected;
- (void)parseIncomingMessageFromNumber:(id)arg1 forService:(id)arg2 messageBody:(id)arg3;

@end
