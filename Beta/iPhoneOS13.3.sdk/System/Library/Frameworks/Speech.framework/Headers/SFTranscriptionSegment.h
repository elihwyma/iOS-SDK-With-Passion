/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SFVoiceAnalytics;

@interface SFTranscriptionSegment : NSObject

{
    float _confidence;
    NSString *_substring;
    double _timestamp;
    double _duration;
    NSArray *_alternativeSubstrings;
    SFVoiceAnalytics *_voiceAnalytics;
    NSArray *_alternativeConfidences;
    NSString *_phoneSequence;
    NSString *_ipaPhoneSequence;
    struct _NSRange _substringRange;
}

@property (nonatomic, readonly) NSArray *alternativeConfidences;
@property (nonatomic, readonly) NSString *phoneSequence;
@property (nonatomic, readonly) NSString *ipaPhoneSequence;
@property (copy, nonatomic, readonly) NSString *substring;
@property (nonatomic, readonly) struct _NSRange substringRange;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) NSArray *alternativeSubstrings;
@property (nonatomic, readonly) SFVoiceAnalytics *voiceAnalytics;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithSubstring:(id)arg1 range:(struct _NSRange)arg2 timestamp:(double)arg3 duration:(double)arg4 confidence:(float)arg5 alternativeSubstrings:(id)arg6 alternativeConfidences:(id)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9 voiceAnalytics:(id)arg10;

@end
