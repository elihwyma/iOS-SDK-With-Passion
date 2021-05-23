/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSDate, PLAudioAgent;

@interface AudioDevice : NSObject

{
    _Bool _isInput;
    _Bool _isRunning;
    _Bool _isDirty;
    unsigned int _deviceID;
    unsigned int _sourceID;
    unsigned int _transType;
    float _volume;
    PLAudioAgent *_ctx;
    CDUnknownBlockType _audioPropertyHandlerBlock;
    NSDate *_lastUpdateTime;
}

@property (weak, nonatomic) PLAudioAgent *ctx;
@property (nonatomic) unsigned int deviceID;
@property (nonatomic) unsigned int sourceID;
@property (nonatomic) unsigned int transType;
@property (nonatomic) _Bool isInput;
@property (nonatomic) _Bool isRunning;
@property (nonatomic) float volume;
@property (copy, nonatomic) CDUnknownBlockType audioPropertyHandlerBlock;
@property (nonatomic) _Bool isDirty;
@property (retain) NSDate *lastUpdateTime;

- (id)initInputDeviceWithCtx:(id)arg1;
- (id)initOutputDeviceWithCtx:(id)arg1;
- (_Bool)updateDefaultAudioDeviceInfo;
- (void)addAudioDeviceListener;
- (void)initAudioPropertyHandler;
- (void)handleAudioDevicePropertyChange:(unsigned int)arg1 addresses:(const struct AudioObjectPropertyAddress *)arg2;
- (void)removeAudioDeviceListener;
- (void)flushAndUpdateDeviceInfoWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)getAudioDeviceIsRunningSomewhere;
- (float)getAudioDeviceVolume;
- (_Bool)getAudioDeviceIsMute;
- (unsigned int)getAudioDeviceTransportType;
- (unsigned int)getAudioDeviceSource;
- (void)cleanAndUpdateDeviceInfo;

@end
