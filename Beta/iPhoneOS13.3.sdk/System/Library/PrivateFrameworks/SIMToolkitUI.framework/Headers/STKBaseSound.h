/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <Foundation/NSObject.h>

@class BSTimer, NSString;

@interface STKBaseSound : NSObject

{
    BSTimer *_timer;
    double _duration;
    _Bool _playsOnce;
    _Bool _isPlaying;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) _Bool playsOnce;
@property (nonatomic, readonly) _Bool isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDuration:(double)arg1;
- (void)playSound;
- (void)stopSound;
- (void)_sync_playSound;
- (void)_sync_stopSound;
- (void)_reallyPlaySound;
- (void)_reallyStopSound;

@end
