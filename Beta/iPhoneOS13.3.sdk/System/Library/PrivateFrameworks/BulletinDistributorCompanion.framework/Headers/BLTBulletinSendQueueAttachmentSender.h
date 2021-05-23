/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface BLTBulletinSendQueueAttachmentSender : NSObject

{
    NSMutableArray *_urls;
}

- (id)init;
- (void)addAttachment:(id)arg1 key:(id)arg2;
- (_Bool)sendAttachmentsWithSender:(id)arg1 timeout:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
