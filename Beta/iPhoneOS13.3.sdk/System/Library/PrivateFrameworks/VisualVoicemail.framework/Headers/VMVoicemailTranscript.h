/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

#import <VisualVoicemail/Swift-Protocol.h>

@class NSArray, NSString;

@interface VMVoicemailTranscript : NSObject <Swift>

{
    float _confidence;
    NSString *_transcriptionString;
    NSArray *_segments;
    unsigned long long _confidenceRating;
}

@property (copy, nonatomic, readonly) NSString *transcriptionString;
@property (copy, nonatomic, readonly) NSArray *segments;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) unsigned long long confidenceRating;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)archivedData;
- (id)initWithTranscription:(id)arg1;

@end
