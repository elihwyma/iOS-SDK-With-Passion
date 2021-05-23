/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotificationReceiver : NSObject

{
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)dealloc;
- (void)postPackedMechanisms:(unsigned long long)arg1;

@end
