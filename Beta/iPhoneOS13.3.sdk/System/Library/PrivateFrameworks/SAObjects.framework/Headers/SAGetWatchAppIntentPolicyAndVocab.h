/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAGetWatchAppIntentPolicyAndVocab : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientIdentifiers;

+ (id)getWatchAppIntentPolicyAndVocab;
+ (id)getWatchAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
