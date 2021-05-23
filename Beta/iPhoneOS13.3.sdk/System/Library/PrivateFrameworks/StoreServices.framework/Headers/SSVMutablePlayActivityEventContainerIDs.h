/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVPlayActivityEventContainerIDs.h>

@class NSString;

@interface SSVMutablePlayActivityEventContainerIDs : SSVPlayActivityEventContainerIDs

@property (nonatomic) long long adamID;
@property (copy, nonatomic) NSString *cloudAlbumID;
@property (nonatomic) unsigned long long cloudPlaylistID;
@property (copy, nonatomic) NSString *globalPlaylistID;
@property (copy, nonatomic) NSString *playlistVersionHash;
@property (copy, nonatomic) NSString *stationHash;
@property (copy, nonatomic) NSString *stationStringID;
@property (nonatomic) long long stationID;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
