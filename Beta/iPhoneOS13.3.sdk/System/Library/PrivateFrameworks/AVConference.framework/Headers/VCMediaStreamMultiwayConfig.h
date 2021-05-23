/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaStreamMultiwayConfig : NSObject

{
    NSString *_sessionId;
    NSString *_participantId;
    unsigned long long _idsParticipantID;
    unsigned int _ssrc;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxMediaBitrate;
    float _maxPacketsPerSecond;
    unsigned short _idsStreamID;
    unsigned int _qualityIndex;
    unsigned int _maxIDSStreamIdCount;
    unsigned short _repairedStreamID;
    unsigned int _repairedMaxNetworkBitrate;
    _Bool _hasRepairedStreamID;
    _Bool _startOnDemand;
}

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *participantId;
@property (nonatomic) unsigned long long idsParticipantID;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) float maxPacketsPerSecond;
@property (nonatomic) unsigned short idsStreamID;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) unsigned int maxIDSStreamIdCount;
@property (nonatomic) unsigned short repairedStreamID;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;
@property (nonatomic) _Bool hasRepairedStreamID;
@property (nonatomic) _Bool startOnDemand;
@property (nonatomic, readonly) NSArray *streamIds;

- (void)dealloc;

@end
