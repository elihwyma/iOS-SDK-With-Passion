/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURLRequest;

@interface AARequest : NSObject

{
    CDUnknownBlockType _handler;
    NSString *_initialURLString;
    _Bool _flushCache;
    struct OpaqueCFHTTPCookieStorage *_cookieStorage;
    NSString *_oneTimePassword;
    NSString *_machineId;
    NSDictionary *_customHeaders;
}

@property (readonly) NSURLRequest *urlRequest;
@property (nonatomic) _Bool flushCache;
@property (copy, nonatomic) NSDictionary *customHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)responseClass;
+ (id)protocolVersion;

- (void)dealloc;
- (id)urlString;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (id)bodyDictionary;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)initWithURLString:(id)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (id)urlCredential;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;

@end
