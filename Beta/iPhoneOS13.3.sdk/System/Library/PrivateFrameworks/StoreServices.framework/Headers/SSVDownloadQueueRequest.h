/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@interface SSVDownloadQueueRequest : SSRequest

{
    long long _queueType;
}

@property (nonatomic, readonly) long long queueType;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithQueueType:(long long)arg1;

@end
