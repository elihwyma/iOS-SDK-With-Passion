/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Foundation/NSObject.h>

@class NSArray, SFTranscription;

@interface SFSpeechRecognitionResult : NSObject

{
    NSArray *_transcriptions;
    NSArray *_rawTranscriptions;
    _Bool _final;
    SFTranscription *_bestTranscription;
    SFTranscription *_rawTranscription;
}

@property (copy, nonatomic, readonly) SFTranscription *rawTranscription;
@property (copy, nonatomic, readonly) NSArray *rawTranscriptions;
@property (copy, nonatomic, readonly) SFTranscription *bestTranscription;
@property (copy, nonatomic, readonly) NSArray *transcriptions;
@property (nonatomic, readonly, getter=isFinal) _Bool final;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithBestTranscription:(id)arg1 rawTranscription:(id)arg2 final:(_Bool)arg3;
- (id)expandTranscription:(id)arg1;
- (id)_initWithBestTranscription:(id)arg1 final:(_Bool)arg2;

@end
