/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEIKEv2RTT : NSObject

{
    unsigned short _rxt_shift;
    int _lastRequestMessageID;
    unsigned long long _rtt_cur;
    unsigned long long _srtt;
    unsigned long long _rtt_var;
    unsigned long long _rtt_start_time;
    unsigned long long _rtt_min;
    unsigned long long _rtt_updated;
    unsigned long long _rxt_cur;
}

@property (nonatomic) int lastRequestMessageID;
@property (nonatomic) unsigned long long rtt_cur;
@property (nonatomic) unsigned long long srtt;
@property (nonatomic) unsigned long long rtt_var;
@property (nonatomic) unsigned long long rtt_start_time;
@property (nonatomic) unsigned long long rtt_min;
@property (nonatomic) unsigned long long rtt_updated;
@property (nonatomic) unsigned long long rxt_cur;
@property (nonatomic) unsigned short rxt_shift;

- (id)init;
- (void)reset;
- (_Bool)startRTTMeasurement:(id)arg1 requestMessageID:(int)arg2;
- (unsigned long long)nextRetransmissionInterval;
- (void)updateRTT:(id)arg1 responseMessageID:(int)arg2;
- (_Bool)getCurrentTime:(struct timeval *)arg1;
- (void)resetRTTMeasurement;

@end
