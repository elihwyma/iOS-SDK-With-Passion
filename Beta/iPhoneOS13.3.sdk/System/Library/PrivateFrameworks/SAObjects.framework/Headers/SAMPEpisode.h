/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAMPMediaItem.h>

@class NSString;

@interface SAMPEpisode : SAMPMediaItem

@property (nonatomic) long long episodeNumber;
@property (nonatomic) long long seasonNumber;
@property (nonatomic) long long showEpisodesCount;
@property (copy, nonatomic) NSString *showName;

+ (id)episode;
+ (id)episodeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
