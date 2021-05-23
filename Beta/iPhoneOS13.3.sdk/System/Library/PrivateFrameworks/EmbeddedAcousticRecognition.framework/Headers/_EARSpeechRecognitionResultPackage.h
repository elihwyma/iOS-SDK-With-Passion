/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class _EARAudioAnalytics, _EARSpeechRecognition;

@interface _EARSpeechRecognitionResultPackage : NSObject

{
    _Bool _recognitionIsFormatted;
    _Bool _isFinal;
    _EARSpeechRecognition *_recognition;
    _EARSpeechRecognition *_preITNRecognition;
    _EARAudioAnalytics *_audioAnalytics;
}

@property (copy, nonatomic, readonly) _EARSpeechRecognition *recognition;
@property (copy, nonatomic, readonly) _EARSpeechRecognition *preITNRecognition;
@property (nonatomic, readonly) _Bool recognitionIsFormatted;
@property (nonatomic, readonly) _Bool isFinal;
@property (copy, nonatomic, readonly) _EARAudioAnalytics *audioAnalytics;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(_Bool)arg3 isFinal:(_Bool)arg4 audioAnalytics:(id)arg5;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(_Bool)arg3 isFinal:(_Bool)arg4;
- (id)nBestResults;

@end
