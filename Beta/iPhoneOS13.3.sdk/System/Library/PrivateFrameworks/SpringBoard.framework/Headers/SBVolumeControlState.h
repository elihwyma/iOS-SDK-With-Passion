/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBVolumeControlState : NSObject <Swift>

{
    _Bool _isAudioPlayingSomewhere;
    _Bool _currentRouteHasVolumeControl;
    _Bool _isFullyMuted;
    _Bool _isRingerMuted;
    _Bool _isUILocked;
    _Bool _isHostingAppOnLockScreen;
    _Bool _isShowingLockScreenMediaControls;
    NSString *_activeVolumeCategoryName;
}

@property (copy, nonatomic) NSString *activeVolumeCategoryName;
@property (nonatomic, setter=setAudioPlayingSomewhere:) _Bool isAudioPlayingSomewhere;
@property (nonatomic, setter=setCurrentRouteHasVolumeControl:) _Bool currentRouteHasVolumeControl;
@property (nonatomic, setter=setFullyMuted:) _Bool isFullyMuted;
@property (nonatomic, setter=setRingerMuted:) _Bool isRingerMuted;
@property (nonatomic, setter=setUILocked:) _Bool isUILocked;
@property (nonatomic, setter=setHostingAppOnLockScreen:) _Bool isHostingAppOnLockScreen;
@property (nonatomic, setter=setShowingLockScreenMediaControls:) _Bool isShowingLockScreenMediaControls;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
