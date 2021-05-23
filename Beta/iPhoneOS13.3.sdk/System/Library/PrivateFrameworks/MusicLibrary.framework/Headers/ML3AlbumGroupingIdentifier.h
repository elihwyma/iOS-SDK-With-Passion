/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ML3AlbumGroupingIdentifier : NSObject

{
    _Bool _compilation;
    long long _albumArtistPersistentID;
    NSData *_groupingKey;
    NSString *_feedURL;
    long long _seasonNumber;
}

@property (nonatomic, readonly) long long albumArtistPersistentID;
@property (nonatomic, readonly) NSData *groupingKey;
@property (nonatomic, readonly) NSString *feedURL;
@property (nonatomic, readonly) long long seasonNumber;
@property (nonatomic, readonly) _Bool compilation;
@property (nonatomic, readonly) NSData *keyValue;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(_Bool)arg5;

@end
