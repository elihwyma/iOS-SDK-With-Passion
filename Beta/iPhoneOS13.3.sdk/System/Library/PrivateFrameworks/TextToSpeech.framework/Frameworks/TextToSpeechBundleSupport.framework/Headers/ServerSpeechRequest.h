/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

#import <NSObject.h>

@class NSArray, TTSSpeechRequest, TTSSpeechServerInstance, TTSVoiceResourceAsset;

@interface ServerSpeechRequest : NSObject

{
    TTSSpeechServerInstance *clientServer;
    TTSSpeechRequest *clientRequest;
    struct __CFString *text;
    struct __CFAttributedString *attributedText;
    struct __CFURL *outputPathURL;
    char *voiceName;
    long long footprint;
    long long voiceType;
    long long gender;
    struct __CFString *languageCode;
    unsigned char notifyMarkStart;
    unsigned char maintainInput;
    unsigned char supportsAccurateWordCallbacks;
    float rate;
    float pitch;
    float volume;
    unsigned char useSharedSession;
    unsigned int audioSessionID;
    unsigned int audioQueueFlags;
    NSArray *channels;
    TTSVoiceResourceAsset *voiceResource;
    NSArray *rulesetRangeAdjustments;
    CDUnknownBlockType audioBufferCallback;
    unsigned char synthesizeSilently;
}

- (void)dealloc;

@end
