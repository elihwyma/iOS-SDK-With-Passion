/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSUserDefaults;

@interface VSSpeechInternalSettings : NSObject

{
    _Bool _internalBuild;
    _Bool _isInternalBuild;
    NSUserDefaults *_internalDefaults;
}

@property (nonatomic) _Bool isInternalBuild;
@property (retain, nonatomic) NSUserDefaults *internalDefaults;
@property (nonatomic, readonly) _Bool internalBuild;
@property (nonatomic) _Bool enableAudioDump;
@property (nonatomic) _Bool logSensitiveText;
@property (nonatomic) _Bool disableCache;
@property (nonatomic) _Bool disableAssetCleaning;
@property (nonatomic) _Bool enableLocalVoices;
@property (nonatomic) float defaultVolume;
@property (nonatomic) _Bool whisper;
@property (nonatomic) float serverTTSTimeout;
@property (nonatomic) _Bool disableDeviceRacing;
@property (nonatomic) _Bool forceServerTTS;
@property (nonatomic) _Bool disableServerTTS;
@property (nonatomic) _Bool disableOsprey;
@property (nonatomic) _Bool forceOsprey;
@property (nonatomic) _Bool disableOspreyStreaming;
@property (nonatomic) float streamBufferDuration;
@property (nonatomic) _Bool useBetaVoice;
@property (retain, nonatomic) NSString *ospreyEndpointURL;

+ (id)standardInstance;

- (id)init;

@end
