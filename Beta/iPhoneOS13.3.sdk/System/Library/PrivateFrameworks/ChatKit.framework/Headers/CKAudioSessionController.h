/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKAudioSessionController : NSObject

{
    _Bool _active;
    _Bool _dirty;
    unsigned long long _options;
}

@property (getter=isActive) _Bool active;
@property (getter=isDirty) _Bool dirty;
@property unsigned long long options;
@property (readonly) _Bool shouldUseSpeaker;
@property (readonly) _Bool shouldStopPlayingWhenSilent;
@property (readonly) _Bool shouldDuckOthers;

+ (id)queue;
+ (id)shareInstance;

- (id)init;
- (void)dealloc;
- (void)deactivate;
- (void)activateWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)audioSessionInterruption:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)audioSessionMediaServicesWereLost:(id)arg1;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
- (void)setActive:(_Bool)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configureAudioSessionWithOptions:(unsigned long long)arg1;

@end
