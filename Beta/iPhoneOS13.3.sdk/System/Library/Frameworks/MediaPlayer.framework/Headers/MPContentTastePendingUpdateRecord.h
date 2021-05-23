/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface MPContentTastePendingUpdateRecord : NSObject

{
    NSString *_playlistGlobalID;
    long long _storeAdamID;
    long long _tasteType;
    long long _type;
    NSUUID *_UUID;
}

@property (nonatomic, readonly) NSString *playlistGlobalID;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly) long long tasteType;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSUUID *UUID;

- (id)initWithPlaylistGlobalID:(id)arg1 tasteType:(long long)arg2;
- (id)initWithStoreAdamID:(long long)arg1 tasteType:(long long)arg2;
- (void)_initializeWithType:(long long)arg1 tasteType:(long long)arg2;

@end
