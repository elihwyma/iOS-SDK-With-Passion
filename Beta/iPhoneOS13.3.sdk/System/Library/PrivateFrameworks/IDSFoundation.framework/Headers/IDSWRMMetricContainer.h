/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@interface IDSWRMMetricContainer : NSObject

{
    unsigned long long _StreamBytesSent;
    unsigned long long _StreamBytesReceived;
    unsigned long long _StreamPacketsSent;
    unsigned long long _StreamPacketsReceived;
    unsigned long long _MessageSentSize;
    unsigned long long _MessageDeliveredSize;
    unsigned long long _MessageDeliveredRTT;
    unsigned long long _MessageReceivedSize;
    unsigned long long _MessageDeliveredDeliveryError;
    unsigned long long _numMessageSentSize;
    unsigned long long _numMessageDeliveredSize;
    unsigned long long _numMessageDeliveredRTT;
    unsigned long long _numMessageReceivedSize;
}

@property (nonatomic) unsigned long long StreamBytesSent;
@property (nonatomic) unsigned long long StreamBytesReceived;
@property (nonatomic) unsigned long long StreamPacketsSent;
@property (nonatomic) unsigned long long StreamPacketsReceived;
@property (nonatomic) unsigned long long MessageSentSize;
@property (nonatomic) unsigned long long MessageDeliveredSize;
@property (nonatomic) unsigned long long MessageDeliveredRTT;
@property (nonatomic) unsigned long long MessageReceivedSize;
@property (nonatomic) unsigned long long MessageDeliveredDeliveryError;
@property (nonatomic, readonly) unsigned long long numMessageSentSize;
@property (nonatomic, readonly) unsigned long long numMessageDeliveredSize;
@property (nonatomic, readonly) unsigned long long numMessageDeliveredRTT;
@property (nonatomic, readonly) unsigned long long numMessageReceivedSize;

- (id)init;
- (id)description;
- (void)resetMetric;

@end
