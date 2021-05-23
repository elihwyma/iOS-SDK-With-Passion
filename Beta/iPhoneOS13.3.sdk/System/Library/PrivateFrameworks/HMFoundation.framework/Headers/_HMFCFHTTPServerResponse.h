/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFHTTPResponseInternal.h>

@class _HMFCFHTTPMessage, _HMFCFHTTPServerRequest;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPServerResponse : HMFHTTPResponseInternal

{
    struct _CFHTTPServerResponse *_responseRef;
    _HMFCFHTTPServerRequest *_request;
    CDUnknownBlockType _completionHandler;
    _HMFCFHTTPMessage *_response;
}

@property (nonatomic, readonly) _HMFCFHTTPMessage *response;
@property (nonatomic, readonly) _HMFCFHTTPServerRequest *request;
@property (nonatomic, readonly) struct _CFHTTPServerResponse *responseRef;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setBody:(id)arg1;
- (id)body;
- (id)headerFields;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
- (id)initWithRequest:(id)arg1 statusCode:(long long)arg2;

@end
