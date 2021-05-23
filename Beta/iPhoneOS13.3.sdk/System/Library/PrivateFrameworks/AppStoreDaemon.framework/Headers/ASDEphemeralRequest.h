/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequest.h>

@class ASDRequestOptions;

@interface ASDEphemeralRequest : ASDRequest

{
    CDUnknownBlockType _completionHandler;
    ASDRequestOptions *_options;
}

@property (copy) CDUnknownBlockType completionHandler;
@property (copy, nonatomic, readonly) ASDRequestOptions *options;

+ (_Bool)supportsSecureCoding;
+ (long long)requestType;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithOptions:(id)arg1;
- (void)_startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_callCompletionHandlerWithResponse:(id)arg1;
- (void)_failCompletionHandlerWithError:(id)arg1;
- (void)receiveResponse:(id)arg1;

@end
