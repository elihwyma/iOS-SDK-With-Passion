/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface ENGCOAuth : NSObject

{
    NSDictionary *__parameters;
    NSString *__method;
    NSURL *__url;
    NSString *_signatureSecret;
    NSDictionary *_OAuthParameters;
}

@property (copy, nonatomic) NSDictionary *requestParameters;
@property (copy, nonatomic) NSString *HTTPMethod;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *signatureSecret;
@property (retain, nonatomic) NSDictionary *OAuthParameters;

+ (id)nonce;
+ (void)setUserAgent:(id)arg1;
+ (void)setHTTPShouldHandleCookies:(_Bool)arg1;
+ (id)timeStamp;
+ (void)setTimeStampOffset:(long long)arg1;
+ (id)queryStringFromParameters:(id)arg1;
+ (id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;
+ (id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 scheme:(id)arg3 host:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 accessToken:(id)arg7 tokenSecret:(id)arg8;
+ (id)URLRequestForPath:(id)arg1 POSTParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;

- (id)request;
- (id)signature;
- (id)authorizationHeader;
- (id)initWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 accessToken:(id)arg3 tokenSecret:(id)arg4;
- (id)signatureBase;

@end
