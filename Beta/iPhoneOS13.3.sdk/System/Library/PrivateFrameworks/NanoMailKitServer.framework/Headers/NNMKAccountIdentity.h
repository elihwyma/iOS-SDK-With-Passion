/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NNMKAccountIdentity : NSObject

{
    NSString *_accountId;
    NSString *_username;
    NSString *_displayName;
    NSString *_token;
    NSString *_refreshToken;
    unsigned long long _identityType;
}

@property (copy, nonatomic) NSString *accountId;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *refreshToken;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned long long identityType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
