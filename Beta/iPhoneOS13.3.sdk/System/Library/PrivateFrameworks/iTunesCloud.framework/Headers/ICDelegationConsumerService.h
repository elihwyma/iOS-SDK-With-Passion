/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface ICDelegationConsumerService : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_activeSessions;
}

- (id)init;
- (void)performRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;

@end
