/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface BLTSendQueueSerializer : NSObject

{
    _Bool _usesMessageIdentifiers;
    NSURL *_sendFileURL;
}

@property (copy, nonatomic) NSURL *sendFileURL;
@property (nonatomic, readonly) _Bool usesMessageIdentifiers;

- (void)cleanup;
- (void)add:(id)arg1 type:(unsigned short)arg2 messageIdentifier:(id *)arg3;
- (id)initWithUsesMessageIdentifiers:(_Bool)arg1;
- (void)add:(id)arg1 type:(unsigned short)arg2;
- (void)sendWithSender:(id)arg1 timeout:(id)arg2 responseHandlers:(id)arg3 didSend:(CDUnknownBlockType)arg4 didQueue:(CDUnknownBlockType)arg5;
- (_Bool)handleFileURL:(id)arg1 protobufHandler:(id)arg2;

@end
