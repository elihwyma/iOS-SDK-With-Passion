/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SOAuthorizationRequestParametersCore : NSObject

{
    _Bool _useInternalExtensions;
    NSURL *_url;
    NSString *_requestedOperation;
    NSDictionary *_httpHeaders;
    NSData *_httpBody;
    NSString *_realm;
    NSDictionary *_extensionData;
    NSData *_auditTokenData;
    NSString *_callerBundleIdentifier;
    NSDictionary *_authorizationOptions;
    long long _responseCode;
}

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *requestedOperation;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSData *httpBody;
@property (copy, nonatomic) NSString *realm;
@property (copy, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSData *auditTokenData;
@property (copy, nonatomic) NSString *callerBundleIdentifier;
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (nonatomic) _Bool useInternalExtensions;
@property (nonatomic) long long responseCode;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthorizationParameters:(id)arg1;
- (id)initWithAuthorizationParametersCore:(id)arg1;

@end
