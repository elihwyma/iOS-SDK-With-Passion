/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAGetAppIntentPolicyAndVocab : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientIdentifiers;

+ (id)getAppIntentPolicyAndVocab;
+ (id)getAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
