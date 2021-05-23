/*
 Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange;

@interface APSOutgoingMessageCheckpointTrace : CUTCheckpointTrace

{
    CUTCheckpointRange *_sendToDaemon;
    CUTCheckpointRange *_messageOnQueue;
    CUTCheckpointRange *_waitForACK;
}

@property (nonatomic, readonly) CUTCheckpointRange *sendToDaemon;
@property (nonatomic, readonly) CUTCheckpointRange *messageOnQueue;
@property (nonatomic, readonly) CUTCheckpointRange *waitForACK;

- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithUniqueIdentifier:(id)arg1;

@end
