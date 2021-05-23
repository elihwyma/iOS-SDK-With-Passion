/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFHTTPRequest.h>

@class NSData, NSDictionary;

@interface HMFMutableHTTPRequest : HMFHTTPRequest

@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) NSData *body;
@property (copy, nonatomic) NSDictionary *headerFields;

- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
- (id)responseWithStatusCode:(long long)arg1;
- (id)initWithInternalRequest:(id)arg1;
- (id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4;

@end
