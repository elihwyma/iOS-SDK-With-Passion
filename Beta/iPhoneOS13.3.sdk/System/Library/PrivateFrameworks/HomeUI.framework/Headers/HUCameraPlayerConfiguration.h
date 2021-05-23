/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HMCameraProfile, HMHome, NSDate, NSUUID;

@interface HUCameraPlayerConfiguration : NSObject

{
    HMHome *_home;
    HMCameraProfile *_cameraProfile;
    long long _scrubberType;
    NSUUID *_notificationUUID;
    NSDate *_startingPlaybackDate;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (nonatomic, readonly) long long scrubberType;
@property (nonatomic, readonly) NSUUID *notificationUUID;
@property (retain, nonatomic) NSDate *startingPlaybackDate;

- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2 scrubberType:(long long)arg3 notificationUUID:(id)arg4;
- (void)fetchClipsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isConfiguredForLiveStream;

@end
