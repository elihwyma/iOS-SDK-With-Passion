/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAAnswerSpeakableAnswer;

@interface SAAnswerDirectAnswer : AceObject <Swift>

@property (copy, nonatomic) NSString *answer;
@property (retain, nonatomic) SAAnswerSpeakableAnswer *speakableAnswer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)directAnswer;
+ (id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
