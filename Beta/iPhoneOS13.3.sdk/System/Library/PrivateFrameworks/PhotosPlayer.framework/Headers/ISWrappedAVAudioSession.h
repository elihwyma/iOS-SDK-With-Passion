/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class AVAudioSession, NSString;

@interface ISWrappedAVAudioSession : NSObject

{
    _Bool _didBeginObservingOutputVolume;
    CDUnknownBlockType _outputVolumeChangeHandler;
    AVAudioSession *_audioSession;
}

@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (copy, nonatomic) CDUnknownBlockType outputVolumeChangeHandler;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) float outputVolume;

+ (id)auxiliarySession;
+ (id)sharedAmbientInstance;
+ (void)sharedAmbientInstanceWithLoadHandler:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (id)_init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
- (_Bool)setCategory:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)_beginObservingOutputVolumeIfNeeded;
- (void)_endObservingOutputVolumeIfNeeded;

@end
