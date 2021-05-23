/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCTransportStream : NSObject

{
    unsigned int _transportSessionID;
    int _vtpReceiveSocket;
    int _vtpCancelSocket;
    struct tagVCMediaQueue *_mediaQueue;
    CDUnknownBlockType _callback;
    void *_callbackContext;
    int _vtpCallbackId;
    struct fd_set _readFDsForCallback;
}

@property (nonatomic) struct tagVCMediaQueue *mediaQueue;

- (void)dealloc;
- (int)receivePacket:(CDStruct_88f6cd69 *)arg1;
- (id)initWithTransportSessionID:(unsigned int)arg1 options:(id)arg2;
- (int)VCTransportStreamSendPacket:(CDStruct_88f6cd69 *)arg1;
- (int)registerPacketCallbackContext:(void *)arg1 callback:(CDUnknownBlockType)arg2;
- (void)VCTransportStreamUnblock;
- (int)unregisterPacketCallback;
- (void)processVTPPacket:(struct _VTPPacket *)arg1;

@end
