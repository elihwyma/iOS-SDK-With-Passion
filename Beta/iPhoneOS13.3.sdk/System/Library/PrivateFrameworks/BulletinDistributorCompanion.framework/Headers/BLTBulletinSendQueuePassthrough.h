/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@protocol BLTBulletinSendQueueDelegate;

@interface BLTBulletinSendQueuePassthrough : NSObject

{
    id <BLTBulletinSendQueueDelegate> _delegate;
}

@property (weak, nonatomic) id <BLTBulletinSendQueueDelegate> delegate;

- (void)sendNow;
- (void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(_Bool)arg3 didSend:(CDUnknownBlockType)arg4;
- (_Bool)handleFileURL:(id)arg1;
- (void)queuePending;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(CDUnknownBlockType)arg3 didQueue:(CDUnknownBlockType)arg4;

@end
