/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAGuidanceSuggestedUtterances : SADomainObject

@property (copy, nonatomic) NSArray *utterances;

+ (id)suggestedUtterances;
+ (id)suggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
