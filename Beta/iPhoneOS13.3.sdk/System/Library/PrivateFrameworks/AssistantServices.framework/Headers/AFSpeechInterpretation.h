/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSArray;

@interface AFSpeechInterpretation : NSObject <Swift>

{
    NSArray *_tokens;
}

@property (copy, nonatomic) NSArray *tokens;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)text;
- (long long)confidenceScore;
- (long long)averageConfidenceScore;
- (long long)confidenceScoreAvg;
- (long long)confidenceScoreMax;
- (long long)confidenceScoreMin;

@end
