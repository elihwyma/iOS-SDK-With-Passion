/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSMutableArray, NSString, NSURL, TTSSpeechChannel;

@protocol TTSSpeechRequestDelegate;

@interface TTSSpeechRequest : NSObject

{
    id <TTSSpeechRequestDelegate> _delegate;
    TTSSpeechChannel *_speechChannel;
    _Bool _maintainsInput;
    _Bool _supportsAccurateWordCallbacks;
    _Bool _audioSessionIDIsValid;
    _Bool _useMonarchStyleRate;
    _Bool _synthesizeSilently;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_languageCode;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;
    double _latency;
    double _dispatchTime;
    double _handledTime;
    NSArray *_channels;
    unsigned long long _synthesizerInstanceID;
    void *_clientContext;
    CDUnknownBlockType _audioBufferCallback;
    NSString *_originalString;
    NSMutableArray *_originalWordRanges;
    NSMutableArray *_processedWordRanges;
    NSMutableArray *_replacedWords;
    long long _wordRangeCallbacksDispatched;
}

@property (retain, nonatomic) TTSSpeechChannel *speechChannel;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) long long gender;
@property (copy, nonatomic) NSURL *outputPath;
@property (nonatomic) double rate;
@property (nonatomic) double pitch;
@property (nonatomic) double volume;
@property (nonatomic) _Bool maintainsInput;
@property (nonatomic) _Bool supportsAccurateWordCallbacks;
@property (nonatomic) _Bool audioSessionIDIsValid;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) double latency;
@property (nonatomic) double dispatchTime;
@property (nonatomic) double handledTime;
@property (nonatomic) _Bool useMonarchStyleRate;
@property (retain, nonatomic) NSArray *channels;
@property (nonatomic) unsigned long long synthesizerInstanceID;
@property (nonatomic) void *clientContext;
@property (copy, nonatomic) CDUnknownBlockType audioBufferCallback;
@property (retain, nonatomic) NSString *originalString;
@property (retain, nonatomic) NSMutableArray *originalWordRanges;
@property (retain, nonatomic) NSMutableArray *processedWordRanges;
@property (retain, nonatomic) NSMutableArray *replacedWords;
@property (nonatomic) long long wordRangeCallbacksDispatched;
@property (nonatomic) _Bool synthesizeSilently;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)vocalizerFootprint;
- (long long)vocalizerGender;
- (id)initWithSpeechChannel:(id)arg1;
- (void)speechRequestDidStartForService:(id)arg1;
- (void)speechRequestDidPauseForService:(id)arg1;
- (void)speechRequestDidContinueForService:(id)arg1;
- (void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2 forService:(id)arg3;
- (void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4;
- (void)speechRequestDidSynthesizeSilentlyToURL:(id)arg1 forService:(id)arg2;

@end
