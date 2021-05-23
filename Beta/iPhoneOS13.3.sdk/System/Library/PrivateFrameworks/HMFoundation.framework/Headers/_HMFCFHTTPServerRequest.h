/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFHTTPRequestInternal.h>

@class NSMutableData, _HMFCFHTTPServerConnection;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal

{
    struct _CFHTTPServerRequest *_requestRef;
    struct __CFReadStream *_bodyStream;
    _HMFCFHTTPServerConnection *_connection;
    NSMutableData *_bodyData;
}

@property (nonatomic, readonly) NSMutableData *bodyData;
@property (nonatomic, readonly) struct _CFHTTPServerRequest *requestRef;
@property (nonatomic, readonly) struct __CFReadStream *bodyStream;
@property (weak, nonatomic, readonly) _HMFCFHTTPServerConnection *connection;

- (id)init;
- (void)dealloc;
- (id)method;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)setMethod:(id)arg1;
- (void)setBody:(id)arg1;
- (id)body;
- (id)headerFields;
- (id)initWithConnection:(id)arg1 requestRef:(struct _CFHTTPServerRequest *)arg2;
- (void)appendBodyData:(id)arg1;
- (id)responseWithStatusCode:(long long)arg1;
- (void)setHeaders:(id)arg1;

@end
