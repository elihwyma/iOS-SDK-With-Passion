/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFActivity, NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface HMFHTTPRequestInternal

{
    NSMutableDictionary *_headerFields;
    NSURL *_URL;
    NSString *_method;
    NSData *_body;
    HMFActivity *_activity;
}

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) NSDictionary *headerFields;
@property (retain, nonatomic) NSData *body;
@property (nonatomic, readonly) HMFActivity *activity;

- (id)init;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
- (id)responseWithStatusCode:(long long)arg1;

@end
