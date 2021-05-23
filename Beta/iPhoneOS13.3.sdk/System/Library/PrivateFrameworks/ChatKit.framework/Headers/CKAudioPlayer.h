/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, CKInternalAudioPlayer, CKMediaObject, NSString;

@protocol CKAudioPlayerDelegate;

__attribute__((visibility("hidden")))
@interface CKAudioPlayer : NSObject

{
    CKMediaObject *_mediaObject;
    id <CKAudioPlayerDelegate> _delegate;
    CKInternalAudioPlayer *_audioPlayer;
    CADisplayLink *_displayLink;
    double _prevCurrentTime;
    CDUnknownBlockType _block;
}

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (retain, nonatomic) CKInternalAudioPlayer *audioPlayer;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double prevCurrentTime;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (weak, nonatomic) id <CKAudioPlayerDelegate> delegate;
@property (nonatomic, readonly) _Bool usesAVPlayer;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)stop;
- (id)initWithFileURL:(id)arg1;
- (void)displayLinkFired:(id)arg1;
- (void)prepareToPlay;
- (void)playAfterDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMediaObject:(id)arg1 shouldUseAVPlayer:(_Bool)arg2;
- (void)internalAudioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)internalAudioPlayerDidPrepareAudioForPlaying:(id)arg1 successfully:(_Bool)arg2;
- (id)initWithMediaObject:(id)arg1;

@end
