/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class MPNowPlayingInfoCenter, MPRemoteCommandCenter;

@interface ATXProtectedNowPlayingObjects : NSObject

{
    MPNowPlayingInfoCenter *nowPlayingInfoCenter;
    MPRemoteCommandCenter *remoteCommandCenter;
    int numActivePlayers;
    _Bool magicalMomentsEngagedByUser;
}

@end
