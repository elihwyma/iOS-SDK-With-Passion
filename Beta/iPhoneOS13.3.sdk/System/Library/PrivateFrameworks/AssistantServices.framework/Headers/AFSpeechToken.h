/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface AFSpeechToken : NSObject <Swift>

{
    _Bool _removeSpaceBefore;
    _Bool _removeSpaceAfter;
    NSString *_text;
    NSString *_phoneSequence;
    NSString *_ipaPhoneSequence;
    long long _confidenceScore;
    double _startTime;
    double _silenceStartTime;
    double _endTime;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *phoneSequence;
@property (copy, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) long long confidenceScore;
@property (nonatomic) double startTime;
@property (nonatomic) double silenceStartTime;
@property (nonatomic) double endTime;
@property (nonatomic) _Bool removeSpaceBefore;
@property (nonatomic) _Bool removeSpaceAfter;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)aceToken;

@end
