/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/_MFDAMSBasicConsumer.h>

@class NSString;

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)handleItems:(id)arg1;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (void)drainMailbox;
- (void)receiveSyncActions:(id)arg1;
- (void)commitSyncActions;

@end
