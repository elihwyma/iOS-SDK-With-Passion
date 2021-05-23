/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (nonatomic) _Bool acceptPodcastCollections;
@property (nonatomic) _Bool acceptPodcastStations;
@property (nonatomic) long long maxResults;
@property (copy, nonatomic) NSString *query;

+ (id)basicPodcastAppSearch;
+ (id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
