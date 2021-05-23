/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/_MRContentItemMetadataProtobuf.h>

@class NSArray, NSDate, NSDictionary, NSObject, NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRContentItemMetadata : _MRContentItemMetadataProtobuf

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSURL *_assetURL;
    NSDictionary *_userInfo;
    NSDictionary *_appMetrics;
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_collectionInfo;
    NSDate *_currentPlaybackDate;
    NSDictionary *_deviceSpecificUserInfo;
    NSArray *_artworkURLTemplates;
}

@property (copy, nonatomic) NSURL *assetURL;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property (copy, nonatomic) NSDictionary *collectionInfo;
@property (copy, nonatomic) NSDictionary *appMetrics;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (copy, nonatomic) NSDate *currentPlaybackDate;
@property (copy, nonatomic) NSArray *artworkURLTemplates;

+ (void)initialize;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)customDictionaryRepresentation;

@end
