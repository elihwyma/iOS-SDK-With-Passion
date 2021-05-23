/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSgPTPPortStatistics : NSObject

{
    int _portType;
    int _portRole;
    unsigned int _receivedSyncCounter;
    unsigned int _receivedFollowUpCounter;
    unsigned int _receivedAnnounceCounter;
    unsigned int _receivedSignalCounter;
    unsigned int _receivedPacketDiscardCounter;
    unsigned int _syncReceiptTimeoutCounter;
    unsigned int _announceReceiptTimeoutCounter;
    unsigned int _allowedLostResponsesExceededCounter;
    unsigned int _transmittedSyncCounter;
    unsigned int _transmittedFollowUpCounter;
    unsigned int _transmittedAnnounceCounter;
    unsigned int _transmittedSignalCounter;
    unsigned int _transmittedPacketDiscardCounter;
    unsigned int _attemptedSyncCounter;
    unsigned int _attemptedFollowUpCounter;
    unsigned int _attemptedAnnounceCounter;
    unsigned int _attemptedSignalCounter;
    unsigned int _rawDelayExceededCounter;
    unsigned int _rawDelayMeasurementCounter;
    unsigned int _receivedPDelayRequestCounter;
    unsigned int _transmittedPDelayResponseCounter;
    unsigned int _transmittedPDelayResponseFollowUpCounter;
    unsigned int _attemptedPDelayResponseCounter;
    unsigned int _attemptedPDelayResponseFollowUpCounter;
    unsigned int _transmittedPDelayRequestCounter;
    unsigned int _attemptedPDelayRequestCounter;
    unsigned int _receivedPDelayResponseCounter;
    unsigned int _receivedPDelayResponseFollowUpCounter;
    unsigned int _receivedDelayRequestCounter;
    unsigned int _transmittedDelayResponseCounter;
    unsigned int _attemptedDelayResponseCounter;
    unsigned int _transmittedDelayRequestCounter;
    unsigned int _attemptedDelayRequestCounter;
    unsigned int _receivedDelayResponseCounter;
    NSString *_portIdentifier;
}

@property (copy, nonatomic, readonly) NSString *portIdentifier;
@property (nonatomic, readonly) int portType;
@property (nonatomic, readonly) int portRole;
@property (nonatomic, readonly) unsigned int receivedSyncCounter;
@property (nonatomic, readonly) unsigned int receivedFollowUpCounter;
@property (nonatomic, readonly) unsigned int receivedAnnounceCounter;
@property (nonatomic, readonly) unsigned int receivedSignalCounter;
@property (nonatomic, readonly) unsigned int receivedPacketDiscardCounter;
@property (nonatomic, readonly) unsigned int syncReceiptTimeoutCounter;
@property (nonatomic, readonly) unsigned int announceReceiptTimeoutCounter;
@property (nonatomic, readonly) unsigned int allowedLostResponsesExceededCounter;
@property (nonatomic, readonly) unsigned int transmittedSyncCounter;
@property (nonatomic, readonly) unsigned int transmittedFollowUpCounter;
@property (nonatomic, readonly) unsigned int transmittedAnnounceCounter;
@property (nonatomic, readonly) unsigned int transmittedSignalCounter;
@property (nonatomic, readonly) unsigned int transmittedPacketDiscardCounter;
@property (nonatomic, readonly) unsigned int attemptedSyncCounter;
@property (nonatomic, readonly) unsigned int attemptedFollowUpCounter;
@property (nonatomic, readonly) unsigned int attemptedAnnounceCounter;
@property (nonatomic, readonly) unsigned int attemptedSignalCounter;
@property (nonatomic, readonly) unsigned int rawDelayExceededCounter;
@property (nonatomic, readonly) unsigned int rawDelayMeasurementCounter;
@property (nonatomic, readonly) unsigned int receivedPDelayRequestCounter;
@property (nonatomic, readonly) unsigned int transmittedPDelayResponseCounter;
@property (nonatomic, readonly) unsigned int transmittedPDelayResponseFollowUpCounter;
@property (nonatomic, readonly) unsigned int attemptedPDelayResponseCounter;
@property (nonatomic, readonly) unsigned int attemptedPDelayResponseFollowUpCounter;
@property (nonatomic, readonly) unsigned int transmittedPDelayRequestCounter;
@property (nonatomic, readonly) unsigned int attemptedPDelayRequestCounter;
@property (nonatomic, readonly) unsigned int receivedPDelayResponseCounter;
@property (nonatomic, readonly) unsigned int receivedPDelayResponseFollowUpCounter;
@property (nonatomic, readonly) unsigned int receivedDelayRequestCounter;
@property (nonatomic, readonly) unsigned int transmittedDelayResponseCounter;
@property (nonatomic, readonly) unsigned int attemptedDelayResponseCounter;
@property (nonatomic, readonly) unsigned int transmittedDelayRequestCounter;
@property (nonatomic, readonly) unsigned int attemptedDelayRequestCounter;
@property (nonatomic, readonly) unsigned int receivedDelayResponseCounter;

- (id)init;
- (void)dealloc;
- (id)initWithPort:(id)arg1;

@end
