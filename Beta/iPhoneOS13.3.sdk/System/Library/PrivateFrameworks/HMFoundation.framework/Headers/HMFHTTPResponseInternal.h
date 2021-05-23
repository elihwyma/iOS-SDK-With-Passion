/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFActivity, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMFHTTPResponseInternal

{
    HMFActivity *_activity;
    long long _statusCode;
    NSDictionary *_headerFields;
    NSData *_body;
}

@property (nonatomic, readonly) long long statusCode;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSData *body;
@property (retain, nonatomic) HMFActivity *activity;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2 body:(id)arg3;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;

@end
