/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSAudioCircularBuffer, CSKeywordAnalyzerNDAPI, NSString;

@interface CSVTUIKeywordDetector : NSObject

{
    NSString *_languageCode;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    float _lastKeywordScore;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _extraSamplesAtStart;
}

- (void)reset;
- (id)initWithLanguageCode:(id)arg1;
- (id)analyze:(id)arg1;
- (unsigned long long)_sampleLengthFrom:(unsigned int)arg1 To:(unsigned int)arg2;
- (id)triggeredUtterance:(id)arg1;

@end
