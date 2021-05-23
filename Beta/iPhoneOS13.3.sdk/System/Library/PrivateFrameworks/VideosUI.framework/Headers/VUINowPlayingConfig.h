/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUINowPlayingConfig : NSObject

{
    _Bool _showsLozengeForLivePlayback;
    _Bool _showsStillWatchingAlert;
    double _stillWatchingAlertDuration;
    double _alertIdleTimeout;
}

@property (nonatomic) _Bool showsLozengeForLivePlayback;
@property (nonatomic) _Bool showsStillWatchingAlert;
@property (nonatomic) double stillWatchingAlertDuration;
@property (nonatomic) double alertIdleTimeout;

- (id)init;

@end
