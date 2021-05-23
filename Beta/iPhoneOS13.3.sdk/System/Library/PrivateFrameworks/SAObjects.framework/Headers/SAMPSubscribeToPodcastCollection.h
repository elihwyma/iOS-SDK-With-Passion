/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString, SAMPPodcastCollection;

@interface SAMPSubscribeToPodcastCollection : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (copy, nonatomic) NSString *hashedRouteUID;
@property (retain, nonatomic) SAMPPodcastCollection *podcastCollection;

+ (id)subscribeToPodcastCollection;
+ (id)subscribeToPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
