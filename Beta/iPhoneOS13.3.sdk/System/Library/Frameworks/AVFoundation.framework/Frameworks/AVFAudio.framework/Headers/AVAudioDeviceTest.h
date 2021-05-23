/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol AVAudioDeviceTestServiceProtocol;

@interface AVAudioDeviceTest : NSObject

{
    NSXPCConnection *_connection;
    id <AVAudioDeviceTestServiceProtocol> _serviceDelegateAsync;
    id <AVAudioDeviceTestServiceProtocol> _serviceDelegateSync;
}

@property (retain) NSXPCConnection *connection;
@property (retain) id <AVAudioDeviceTestServiceProtocol> serviceDelegateAsync;
@property (retain) id <AVAudioDeviceTestServiceProtocol> serviceDelegateSync;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)startWithSequence:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
