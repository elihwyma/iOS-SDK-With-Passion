/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTextDevice : NSObject

{
    int _clientPid;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    id _sendDelegate;
    id _mediaStreamDelegate;
    NSObject<OS_dispatch_queue> *_mediaStreamDelegateQueue;
}

@property (nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)start;
- (void)setPause:(_Bool)arg1;
- (id)sendDelegate;
- (void)sendText:(struct NSString *)arg1;
- (void)sendCharacter:(unsigned short)arg1;
- (void)didReceiveText:(struct NSString *)arg1;
- (id)initWithSendDelegate:(id)arg1 clientPid:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (_Bool)setStreamConfig:(id)arg1 withError:(id *)arg2;

@end
