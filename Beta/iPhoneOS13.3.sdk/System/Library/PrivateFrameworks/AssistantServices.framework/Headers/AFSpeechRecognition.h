/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSArray;

@interface AFSpeechRecognition : NSObject <Swift>

{
    NSArray *_phrases;
    NSArray *_utterances;
}

@property (copy, nonatomic, readonly) NSArray *phrases;
@property (copy, nonatomic, readonly) NSArray *utterances;

+ (_Bool)supportsSecureCoding;
+ (id)fakeOneBestFromPhrases:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrases:(id)arg1;
- (id)initWithPhrases:(id)arg1 utterances:(id)arg2;
- (id)aceRecognition;

@end
