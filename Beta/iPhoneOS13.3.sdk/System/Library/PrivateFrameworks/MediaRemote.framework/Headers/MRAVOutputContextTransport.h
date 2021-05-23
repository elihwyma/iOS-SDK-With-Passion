/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRExternalDeviceTransport.h>

@class AVOutputContext, AVOutputDevice, MRAVInputStream, MRAVOutputDevice, MRAVOutputStream, NSError, NSObject, _MRDeviceInfoMessageProtobuf;

@protocol OS_dispatch_queue;

@interface MRAVOutputContextTransport : MRExternalDeviceTransport

{
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_serialQueue;
    AVOutputContext *_outputContext;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSError *_error;
    MRAVInputStream *_inputStream;
    MRAVOutputStream *_outputStream;
    _Bool _useSystemAuthenticationPrompt;
    MRAVOutputDevice *_outputDevice;
    AVOutputDevice *_avOutputDevice;
}

@property (nonatomic, readonly) MRAVOutputDevice *outputDevice;
@property (nonatomic, readonly) AVOutputDevice *avOutputDevice;

- (void)dealloc;
- (id)description;
- (id)name;
- (long long)port;
- (id)error;
- (void)reset;
- (id)uid;
- (id)hostname;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2;
- (id)deviceInfo;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (_Bool)requiresCustomPairing;
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;
- (_Bool)shouldUseSystemAuthenticationPrompt;
- (void)_unregisterNotificationsForOutputContext:(id)arg1;
- (void)_destroyRemoteControlContext;
- (void)_onQueue_initializeOutputContext;
- (void)_onQueue_resetStreams;
- (id)_onQueue_createRemoteControlContextWithID:(id)arg1;
- (void)_registerNotificationsForOutputContext:(id)arg1;
- (id)initWithOutputDevice:(id)arg1 avOutputDevice:(id)arg2 connectionType:(long long)arg3;

@end
