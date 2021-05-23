/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SALocalSearchAnswerRerouteSuggestion : SADomainCommand

@property (copy, nonatomic) NSString *response;

+ (id)answerRerouteSuggestion;
+ (id)answerRerouteSuggestionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
