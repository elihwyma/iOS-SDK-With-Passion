/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

#import <AuthKit/Swift-Protocol.h>

@class AKAuthorizationScopesUserSelection, NSNumber, NSString;

@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationUserResponse : NSObject <Swift>

{
    id <AKCredentialRequestProtocol> _selectedRequest;
    AKAuthorizationScopesUserSelection *_userSelection;
    NSNumber *_loginChoice;
    NSString *_rawAccountPassword;
}

@property (retain, nonatomic) id <AKCredentialRequestProtocol> selectedRequest;
@property (retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection;
@property (retain, nonatomic) NSNumber *loginChoice;
@property (copy, nonatomic) NSString *rawAccountPassword;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
