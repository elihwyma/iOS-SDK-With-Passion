/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SADonateRankedQueriesToPortrait : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *queryDonations;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (copy, nonatomic) NSString *utterance;

+ (id)donateRankedQueriesToPortrait;
+ (id)donateRankedQueriesToPortraitWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
