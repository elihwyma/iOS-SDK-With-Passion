/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

#import <AppleServiceToolkit/Swift-Protocol.h>

@class ASTIdentity, NSMutableURLRequest, NSString;

@protocol ASTConnectionStatusDelegate;

@interface ASTMaterializedConnection : NSObject <Swift>

{
    _Bool _retryOnNetworkDisconnected;
    _Bool _allowsCellularAccess;
    CDUnknownBlockType _didReceiveResponse;
    NSMutableURLRequest *_request;
    id <ASTConnectionStatusDelegate> _delegate;
    long long _state;
    long long _networkDisconnectedRetryCount;
    unsigned long long _rootOfTrust;
    NSString *_sessionId;
    NSString *_signature;
    ASTIdentity *_identity;
    double _timeout;
}

@property (nonatomic) _Bool allowsCellularAccess;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) ASTIdentity *identity;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) double timeout;
@property (nonatomic, readonly) NSString *method;
@property (nonatomic, readonly) NSString *endpoint;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *accept;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType didReceiveResponse;
@property (nonatomic, readonly) NSMutableURLRequest *request;
@property (weak, nonatomic) id <ASTConnectionStatusDelegate> delegate;
@property (nonatomic) long long state;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic) _Bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;

- (id)init;
- (void)addBody:(id)arg1 gzip:(_Bool)arg2;
- (unsigned long long)_rootOfTrust;
- (id)_acceptLanguage;

@end
