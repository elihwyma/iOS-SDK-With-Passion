/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

#import <VisualVoicemail/Swift-Protocol.h>

@class NSString;

@interface VMVoicemailTranscriptSegment : NSObject <Swift>

{
    float _confidence;
    NSString *_substring;
    double _duration;
    double _timestamp;
    unsigned long long _confidenceRating;
    struct _NSRange _substringRange;
}

@property (nonatomic) unsigned long long confidenceRating;
@property (copy, nonatomic, readonly) NSString *substring;
@property (nonatomic, readonly) struct _NSRange substringRange;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) double timestamp;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTranscriptionSegment:(id)arg1 confidenceThreshold:(float)arg2;

@end
