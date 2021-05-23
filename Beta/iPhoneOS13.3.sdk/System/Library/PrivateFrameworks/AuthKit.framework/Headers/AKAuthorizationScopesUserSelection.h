/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

#import <AuthKit/Swift-Protocol.h>

@class AKUserInformation;

@interface AKAuthorizationScopesUserSelection : NSObject <Swift>

{
    _Bool _makePrivateEmail;
    AKUserInformation *_userInformation;
}

@property (copy, nonatomic) AKUserInformation *userInformation;
@property (nonatomic) _Bool makePrivateEmail;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
