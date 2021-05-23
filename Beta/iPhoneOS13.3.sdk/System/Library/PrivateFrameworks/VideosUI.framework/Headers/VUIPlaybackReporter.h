/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface VUIPlaybackReporter : NSObject

{
    _Bool _enforceSinglePlaybackSession;
    NSMutableArray *_sessions;
}

@property (retain, nonatomic) NSMutableArray *sessions;
@property (nonatomic, readonly) _Bool enforceSinglePlaybackSession;

- (id)init;
- (void)dealloc;
- (void)_registerObservers;
- (void)_removeObservers;
- (void)_endSession:(id)arg1;
- (void)_playerStateWillChange:(id)arg1;
- (void)_playerCurrentMediaItemWillChange:(id)arg1;
- (void)_logWithFormat:(id)arg1;
- (void)_handlePlaybackChangeForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3 reason:(id)arg4;
- (id)_sessionForPlayer:(id)arg1;
- (_Bool)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3;
- (void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3;
- (void)_endSessions:(id)arg1;
- (id)_createSessionForPlayer:(id)arg1;
- (void)_beginSession:(id)arg1;

@end
