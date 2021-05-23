/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@class NSArray, NSString;

@protocol ECAuthenticatableConnection <Swift>

@property (nonatomic, readonly) NSArray *authenticationMechanisms;
@property (nonatomic, readonly) NSString *securityProtocol;
@property (nonatomic, readonly) _Bool loginDisabled;

@end
