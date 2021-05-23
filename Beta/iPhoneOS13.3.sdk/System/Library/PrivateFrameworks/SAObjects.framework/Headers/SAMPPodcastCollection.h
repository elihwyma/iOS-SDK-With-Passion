/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAMPCollection.h>

@class NSArray, NSNumber, NSString;

@interface SAMPPodcastCollection : SAMPCollection

@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSArray *preferredPlayOrder;
@property (copy, nonatomic) NSString *sortArtist;
@property (copy, nonatomic) NSNumber *subscribed;

+ (id)podcastCollection;
+ (id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
