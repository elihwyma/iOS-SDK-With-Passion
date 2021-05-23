/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAMPMediaItem.h>

@class NSString;

@interface SAMPPodcast : SAMPMediaItem

@property (copy, nonatomic) NSString *seriesId;
@property (copy, nonatomic) NSString *seriesTitle;

+ (id)podcast;
+ (id)podcastWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
