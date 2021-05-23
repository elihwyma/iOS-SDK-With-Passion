/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSArray;

@interface AFSpeechUtterance : NSObject <Swift>

{
    NSArray *_interpretationIndices;
    long long _confidenceScore;
    long long _source;
}

@property (copy, nonatomic) NSArray *interpretationIndices;
@property (nonatomic) long long confidenceScore;
@property (nonatomic) long long source;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2;

@end
