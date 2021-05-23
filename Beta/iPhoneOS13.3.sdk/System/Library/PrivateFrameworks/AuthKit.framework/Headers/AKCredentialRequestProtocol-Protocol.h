/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <AuthKit/Swift-Protocol.h>

@class NSString, NSUUID;

@protocol AKCredentialRequestProtocol <Swift>

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic, readonly) NSString *altDSID;
@property (copy, nonatomic, readonly) NSUUID *requestIdentifier;

@end
