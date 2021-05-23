/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMMediaSession, NSString, NSUUID, _HMAudioControl;

@protocol HMAudioControlDelegate;

@interface HMAudioControl : NSObject

{
    id <HMAudioControlDelegate> _delegate;
    HMMediaSession *_mediaSession;
    _HMAudioControl *_audioControl;
}

@property (retain, nonatomic) _HMAudioControl *audioControl;
@property float volume;
@property (getter=isMuted) _Bool muted;
@property (weak) id <HMAudioControlDelegate> delegate;
@property (weak) HMMediaSession *mediaSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)__configureWithContext:(id)arg1;
- (void)audioControl:(id)arg1 didUpdateVolume:(float)arg2;
- (void)audioControl:(id)arg1 didUpdateMuted:(_Bool)arg2;
- (id)initWithMediaSession:(id)arg1;
- (void)updateVolume:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateMuted:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
