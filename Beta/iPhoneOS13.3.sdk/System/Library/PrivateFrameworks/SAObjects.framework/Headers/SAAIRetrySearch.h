/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAAIRetrySearch : SABaseClientBoundCommand

@property (nonatomic) double minimumDurationForRetry;

+ (id)retrySearch;
+ (id)retrySearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
