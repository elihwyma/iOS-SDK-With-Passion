/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <AppleServiceToolkit/Swift-Protocol.h>

@class NSMutableURLRequest;

@protocol ASTConnectionStatusDelegate;

@protocol ASTConnection <Swift>

@property (copy, nonatomic) CDUnknownBlockType didReceiveResponse;
@property (nonatomic, readonly) NSMutableURLRequest *request;
@property (weak, nonatomic) id <ASTConnectionStatusDelegate> delegate;
@property (nonatomic) long long state;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic) _Bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;

@end
