/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKDiscovery, GKPlayer, NSString;

@interface GKNearbyDevice : NSObject

{
    NSString *_deviceID;
    GKDiscovery *_discovery;
    GKPlayer *_player;
    long long _state;
}

@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) long long state;
@property (retain, nonatomic) GKDiscovery *discovery;
@property (retain, nonatomic) GKPlayer *player;

+ (id)nearbyDeviceWithID:(id)arg1 discovery:(id)arg2;

- (void)dealloc;
- (void)sendDictionary:(id)arg1;

@end
