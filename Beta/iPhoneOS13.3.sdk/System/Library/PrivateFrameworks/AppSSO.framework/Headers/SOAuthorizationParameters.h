/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL, SOAuthorizationParametersCore;

@interface SOAuthorizationParameters : NSObject

{
    SOAuthorizationParametersCore *_authorizationParametersCore;
    long long _responseCode;
}

@property (nonatomic, readonly) SOAuthorizationParametersCore *authorizationParametersCore;
@property (copy, nonatomic) NSString *operation;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *httpHeaders;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSData *auditTokenData;
@property (nonatomic) _Bool useInternalExtensions;
@property (nonatomic) long long responseCode;

- (id)init;

@end
