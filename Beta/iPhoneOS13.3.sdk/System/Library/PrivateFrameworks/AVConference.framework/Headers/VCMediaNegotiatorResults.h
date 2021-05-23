/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorResults : NSObject

{
    _Bool _supportsDynamicMaxBitrate;
    NSString *_remoteUserAgent;
    NSString *_remoteBasebandCodec;
    unsigned int _remoteBasebandCodecSampleRate;
    NSMutableDictionary *_bandwidthSettings;
    unsigned char _mediaControlInfoVersion;
}

@property (nonatomic) _Bool supportsDynamicMaxBitrate;
@property (retain, nonatomic) NSString *remoteUserAgent;
@property (retain, nonatomic) NSString *remoteBasebandCodec;
@property (nonatomic) unsigned int remoteBasebandCodecSampleRate;
@property (retain, nonatomic) NSMutableDictionary *bandwidthSettings;
@property (nonatomic) unsigned char mediaControlInfoVersion;

- (id)init;
- (void)dealloc;

@end
