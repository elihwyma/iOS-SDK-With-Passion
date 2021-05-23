/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFHTTPRequest, HMFHTTPResponseInternal, NSData, NSDictionary;

@interface HMFHTTPResponse

{
    HMFHTTPResponseInternal *_internal;
    HMFHTTPRequest *_request;
}

@property (nonatomic, readonly) HMFHTTPResponseInternal *internal;
@property (nonatomic, readonly) HMFHTTPRequest *request;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSDictionary *headerFields;
@property (nonatomic, readonly) NSData *body;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)attributeDescriptions;
- (id)initWithRequest:(id)arg1 internalResponse:(id)arg2;

@end
