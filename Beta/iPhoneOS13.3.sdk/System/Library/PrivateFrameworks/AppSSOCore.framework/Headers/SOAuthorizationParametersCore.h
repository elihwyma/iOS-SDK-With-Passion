/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SOAuthorizationParametersCore : NSObject

{
    _Bool _useInternalExtensions;
    NSString *_operation;
    NSURL *_url;
    NSDictionary *_httpHeaders;
    NSData *_httpBody;
    NSData *_auditTokenData;
    long long _responseCode;
}

@property (copy, nonatomic) NSString *operation;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *httpHeaders;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSData *auditTokenData;
@property (nonatomic) _Bool useInternalExtensions;
@property (nonatomic) long long responseCode;

- (id)init;

@end
