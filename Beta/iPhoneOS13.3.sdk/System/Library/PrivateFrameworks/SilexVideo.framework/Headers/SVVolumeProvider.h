/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface SVVolumeProvider : NSObject

{
    _Bool _muted;
    float _volume;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool muted;
@property (nonatomic, readonly) float volume;

- (void)setVolume:(float)arg1;
- (void)setMuted:(_Bool)arg1;
- (id)initWithMuteState:(_Bool)arg1 volume:(float)arg2;
- (void)addVolumeObserver:(id)arg1;
- (void)removeVolumeObserver:(id)arg1;

@end
