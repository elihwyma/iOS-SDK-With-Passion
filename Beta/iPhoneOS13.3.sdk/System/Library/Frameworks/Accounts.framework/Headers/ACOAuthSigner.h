/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSXPCConnection;

@protocol ACDOAuthSignerProtocol;

@interface ACOAuthSigner : NSObject

{
    NSXPCConnection *_connection;
    ACAccount *_account;
    id <ACDOAuthSignerProtocol> _proxyShim;
    _Bool _shouldIncludeAppIdInRequest;
}

@property (nonatomic) _Bool shouldIncludeAppIdInRequest;

- (void)dealloc;
- (id)initWithAccount:(id)arg1 remoteEndpoint:(id)arg2;
- (void)_connectToRemoteOAuthSignerUsingEndpoint:(id)arg1;
- (void)disconnectFromRemoteOAuthSigner;
- (id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3;
- (id)initWithAccount:(id)arg1;
- (id)signedURLRequestWithURLRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3;
- (id)signedURLRequestWithURLRequest:(id)arg1;

@end
