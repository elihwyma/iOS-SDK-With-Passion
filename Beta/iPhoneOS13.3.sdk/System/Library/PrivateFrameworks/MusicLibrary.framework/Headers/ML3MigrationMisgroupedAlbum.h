/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface ML3MigrationMisgroupedAlbum : NSObject

{
    NSMutableArray *_misgroupedTracks;
    long long _albumPID;
    long long _albumArtistPID;
}

@property (nonatomic, readonly) long long albumPID;
@property (nonatomic, readonly) long long albumArtistPID;
@property (nonatomic, readonly) NSArray *misgroupedTracks;

- (id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2;
- (void)addMisgroupedTrack:(id)arg1;

@end
