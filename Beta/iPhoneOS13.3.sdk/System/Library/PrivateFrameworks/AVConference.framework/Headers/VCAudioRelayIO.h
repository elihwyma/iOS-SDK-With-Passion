/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

#import <AVConference/Swift-Protocol.h>

@class NSString;

@protocol VCBasebandCodecNotifications;

@interface VCAudioRelayIO : NSObject <Swift>

{
    _Bool _usePacketThread;
    struct PacketThread_s *_packetThread;
    _Bool _isRunning;
    unsigned int _micTimestamp;
    struct AudioStreamBasicDescription _micFormat;
    CDUnknownFunctionPointerType _micCallback;
    void *_micCallbackContext;
    struct opaqueVCAudioBufferList *_micBuffer;
    unsigned int _speakerTimestamp;
    struct AudioStreamBasicDescription _speakerFormat;
    CDUnknownFunctionPointerType _speakerCallback;
    void *_speakerCallbackContext;
    struct opaqueVCAudioBufferList *_speakerBuffer;
    CDUnknownFunctionPointerType _updateRemoteCodecInfoCallback;
    void *_updateRemoteCodecInfoContext;
    float _micPowerRMS;
    float _speakerPowerRMS;
    CDUnknownBlockType _startCompletionHandler;
    struct _VCRemoteCodecInfo _remoteCodecInfo;
    id _relay;
}

@property unsigned int speakerTimestamp;
@property unsigned int micTimestamp;
@property (readonly) struct PacketThread_s *packetThread;
@property float micPowerRMS;
@property float speakerPowerRMS;
@property id <VCBasebandCodecNotifications> relay;
@property (nonatomic, readonly) _Bool isRunning;
@property _Bool usePacketThread;
@property (copy) CDUnknownBlockType startCompletionHandler;
@property (nonatomic) const struct _VCRemoteCodecInfo *remoteCodecInfo;
@property struct AudioStreamBasicDescription micFormat;
@property CDUnknownFunctionPointerType micCallback;
@property void *micCallbackContext;
@property (nonatomic, readonly) struct opaqueVCAudioBufferList *micBuffer;
@property struct AudioStreamBasicDescription speakerFormat;
@property CDUnknownFunctionPointerType speakerCallback;
@property void *speakerCallbackContext;
@property (nonatomic, readonly) struct opaqueVCAudioBufferList *speakerBuffer;
@property CDUnknownFunctionPointerType updateRemoteCodecInfoCallback;
@property void *updateRemoteCodecInfoContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isInitialized;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)destroyPacketThread;
- (void)closeRecordings;
- (void)createAudioBuffersWithIOBufferDuration:(double)arg1;
- (_Bool)isEqualToRelayIO:(id)arg1;
- (_Bool)createPacketThreadWithIOBufferDuration:(double)arg1 name:(id)arg2 error:(id *)arg3;
- (void)createRecordingsWithName:(id)arg1;
- (void)printStreamFormats;

@end
