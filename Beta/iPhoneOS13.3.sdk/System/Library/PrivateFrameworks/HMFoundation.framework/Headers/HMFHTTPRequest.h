/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFHTTPRequestInternal, NSData, NSDictionary, NSString, NSURL, NSURLRequest;

@interface HMFHTTPRequest

{
    HMFHTTPRequestInternal *_internal;
    double _timeoutInterval;
}

@property (nonatomic) double timeoutInterval;
@property (nonatomic, readonly) HMFHTTPRequestInternal *internal;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *method;
@property (nonatomic, readonly) NSDictionary *headerFields;
@property (nonatomic, readonly) NSData *body;
@property (copy, nonatomic, readonly) NSURLRequest *urlRequest;

- (id)init;
- (id)attributeDescriptions;
- (id)responseWithStatusCode:(long long)arg1;
- (id)initWithInternalRequest:(id)arg1;

@end
