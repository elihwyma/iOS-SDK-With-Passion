/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class AVAudioSession, NSString;

@protocol SVPlayerProviding;

@interface SVVideoVolumeObserverFactory : NSObject

{
    id <SVPlayerProviding> _playerProvider;
    AVAudioSession *_audioSession;
}

@property (nonatomic, readonly) id <SVPlayerProviding> playerProvider;
@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createVolumeObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 audioSession:(id)arg2;

@end
