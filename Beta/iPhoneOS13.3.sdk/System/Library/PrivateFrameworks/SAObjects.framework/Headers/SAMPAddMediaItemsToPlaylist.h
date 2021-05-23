/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAMPPlaylist;

@interface SAMPAddMediaItemsToPlaylist : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedUserSharedUserId;
@property (copy, nonatomic) NSString *insertLocation;
@property (copy, nonatomic) NSArray *mediaItems;
@property (retain, nonatomic) SAMPPlaylist *playlist;

+ (id)addMediaItemsToPlaylist;
+ (id)addMediaItemsToPlaylistWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
