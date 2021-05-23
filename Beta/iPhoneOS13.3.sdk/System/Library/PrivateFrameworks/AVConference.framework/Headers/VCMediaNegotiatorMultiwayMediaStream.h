/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMultiwayMediaStream : NSObject

{
    unsigned int _ssrc;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxMediaBitrate;
    unsigned int _maxPacketsPerSecond;
    unsigned short _streamID;
    _Bool _isSubstream;
    unsigned int _qualityIndex;
    _Bool _hasRepairedStreamID;
    unsigned short _repairedStreamID;
    unsigned int _repairedMaxNetworkBitrate;
}

@property (nonatomic) unsigned int ssrc;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) unsigned int maxPacketsPerSecond;
@property (nonatomic) _Bool isSubstream;
@property (nonatomic) unsigned short streamID;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) _Bool hasRepairedStreamID;
@property (nonatomic) unsigned short repairedStreamID;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
