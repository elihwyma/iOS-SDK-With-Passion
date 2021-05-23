/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <CommonUtilities/CUTCheckpointTrace.h>

@class APSOutgoingMessageCheckpointTrace;

@interface IDSAggregateMessageSendCheckpointTrace : CUTCheckpointTrace

{
    APSOutgoingMessageCheckpointTrace *_apsMessageTrace;
}

@property (retain, nonatomic) APSOutgoingMessageCheckpointTrace *apsMessageTrace;

- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithUniqueIdentifier:(id)arg1;

@end
