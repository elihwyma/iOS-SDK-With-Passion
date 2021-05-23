/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSVPlayActivityEventContainerIDs : NSObject

{
    long long _adamID;
    NSString *_cloudAlbumID;
    unsigned long long _cloudPlaylistID;
    NSString *_globalPlaylistID;
    NSString *_playlistVersionHash;
    long long _stationID;
    NSString *_stationHash;
    NSString *_stationStringID;
}

@property (nonatomic, readonly) long long adamID;
@property (copy, nonatomic, readonly) NSString *cloudAlbumID;
@property (nonatomic, readonly) unsigned long long cloudPlaylistID;
@property (copy, nonatomic, readonly) NSString *globalPlaylistID;
@property (copy, nonatomic, readonly) NSString *playlistVersionHash;
@property (copy, nonatomic, readonly) NSString *stationHash;
@property (copy, nonatomic, readonly) NSString *stationStringID;
@property (nonatomic, readonly) long long stationID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_copyWithClass:(Class)arg1;

@end
