/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSHTTPURLResponse;

@interface SOAuthorizationCredentialCore : NSObject

{
    NSDictionary *_httpAuthorizationHeaders;
    NSHTTPURLResponse *_httpResponse;
    NSData *_httpBody;
}

@property (retain, nonatomic) NSDictionary *httpAuthorizationHeaders;
@property (copy, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSData *httpBody;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthorizationCredential:(id)arg1;

@end
