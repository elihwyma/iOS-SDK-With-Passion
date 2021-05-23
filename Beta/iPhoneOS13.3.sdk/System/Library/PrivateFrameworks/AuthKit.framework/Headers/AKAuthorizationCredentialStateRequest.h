/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

#import <AuthKit/Swift-Protocol.h>

@class NSString;

@interface AKAuthorizationCredentialStateRequest : NSObject <Swift>

{
    _Bool _shouldIgnoreUserID;
    _Bool _shouldIgnoreTeamID;
    NSString *_userID;
    NSString *_teamID;
    NSString *_clientID;
    NSString *_altDSID;
}

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) _Bool shouldIgnoreUserID;
@property (nonatomic) _Bool shouldIgnoreTeamID;
@property (copy, nonatomic) NSString *userID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
