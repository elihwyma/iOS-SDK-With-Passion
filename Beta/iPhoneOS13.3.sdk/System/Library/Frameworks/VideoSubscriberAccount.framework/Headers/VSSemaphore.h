/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface VSSemaphore : NSObject

{
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (id)init;
- (void)wait;
- (void)signal;

@end
