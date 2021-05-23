/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@interface ML3MigrationMisgroupedTrack : NSObject

{
    long long _persistentID;
    long long _albumArtistPID;
}

@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) long long albumArtistPID;

- (id)initWithPersistentID:(long long)arg1 albumArtistPID:(long long)arg2;

@end
