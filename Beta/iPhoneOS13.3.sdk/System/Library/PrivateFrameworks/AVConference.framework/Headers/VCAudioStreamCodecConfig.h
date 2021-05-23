/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCAudioStreamCodecConfig : NSObject

{
    long long _codecType;
    _Bool _dtxEnabled;
    int _preferredMode;
    NSMutableArray *_supportedModes;
    _Bool _octetAligned;
    _Bool _dtmf;
    unsigned int _networkPayload;
    unsigned short _evsChannelAwareOffset;
    _Bool _evsHeaderFullOnly;
}

@property (nonatomic, readonly) long long codecType;
@property (nonatomic, getter=isOctetAligned) _Bool octetAligned;
@property (nonatomic, getter=isDTXEnabled) _Bool dtxEnabled;
@property (nonatomic) int preferredMode;
@property (retain, nonatomic) NSArray *supportedModes;
@property (nonatomic, readonly) _Bool isComfortNoise;
@property (nonatomic, getter=isDTMF) _Bool dtmf;
@property (nonatomic) unsigned int networkPayload;
@property (nonatomic) unsigned short evsChannelAwareOffset;
@property (nonatomic) _Bool evsHeaderFullOnly;

- (void)dealloc;
- (void)setupAMRModesWithClientModeMask:(unsigned int)arg1;
- (void)setupAMRWBModesWithClientModeMask:(unsigned int)arg1;
- (void)setupEVSModesWithClientModeMask:(unsigned int)arg1;
- (id)initWithCodecType:(long long)arg1;
- (void)setupModesWithClientModeMask:(unsigned int)arg1;
- (void)setPreferredModeWithClientMode:(int)arg1;

@end
