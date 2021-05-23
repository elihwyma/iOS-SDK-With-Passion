/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAUISetSuggestedUtterances : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *utterances;

+ (id)setSuggestedUtterances;
+ (id)setSuggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
