/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPMessage

{
    struct __CFHTTPMessage *_message;
}

@property (nonatomic, readonly) struct __CFHTTPMessage *message;
@property (nonatomic, readonly) NSDictionary *headerFields;
@property (copy, nonatomic) NSData *body;

+ (id)dateFormatter;
+ (id)requestWithMethod:(id)arg1 url:(id)arg2 protocolVersion:(long long)arg3;
+ (id)responseWithStatusCode:(long long)arg1 statusDescription:(id)arg2 protocolVersion:(long long)arg3;

- (id)init;
- (void)dealloc;
- (id)date;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (void)setDate:(id)arg1;
- (long long)contentLength;
- (id)initWithMessageRef:(struct __CFHTTPMessage *)arg1;
- (id)valueForHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (void)setContentLength:(long long)arg1;

@end
