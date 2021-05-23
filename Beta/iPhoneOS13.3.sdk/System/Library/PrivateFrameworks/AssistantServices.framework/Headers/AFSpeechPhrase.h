/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSArray;

@interface AFSpeechPhrase : NSObject <Swift>

{
    _Bool _isLowConfidence;
    NSArray *_interpretations;
}

@property (copy, nonatomic) NSArray *interpretations;
@property (nonatomic) _Bool isLowConfidence;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretations:(id)arg1 isLowConfidence:(_Bool)arg2;
- (id)bestInterpretation;
- (id)firstInterpretation;
- (struct NSDictionary *)allInterpretationStringsAndScores;

@end
