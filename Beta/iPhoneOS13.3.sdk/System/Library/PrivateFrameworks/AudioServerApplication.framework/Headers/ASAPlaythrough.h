/*
 Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

#import <Foundation/NSObject.h>

@class ASAAudioDevice, NSArray, NSString;

@interface ASAPlaythrough : NSObject

{
    CDUnknownFunctionPointerType _procID;
    CDStruct_3e00b629 *_ioContext;
    NSArray *_channelMapping;
    unsigned int _aggregateID;
    NSString *_aggregateUID;
    _Bool _playing;
    ASAAudioDevice *_audioDevice;
}

@property (retain) ASAAudioDevice *audioDevice;
@property _Bool playing;

- (void)dealloc;
- (_Bool)stop;
- (_Bool)start;
- (id)initWithDevice:(id)arg1 usingChannelMapping:(id)arg2;
- (void)_createIOContext;
- (void)_destroyIOContext;
- (void)_freeIOContext:(CDStruct_3e00b629 *)arg1;
- (id)initWithDevices:(id)arg1 usingMasterDevice:(id)arg2 andClockDeviceUID:(id)arg3 withName:(id)arg4 isPrivate:(_Bool)arg5 usingChannelMapping:(id)arg6;

@end
