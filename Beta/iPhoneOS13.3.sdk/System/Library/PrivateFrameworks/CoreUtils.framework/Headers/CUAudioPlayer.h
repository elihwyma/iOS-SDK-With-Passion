/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class AVAudioSession, CUAudioRequest, NSString;

@protocol OS_dispatch_queue;

@interface CUAudioPlayer : NSObject

{
    AVAudioSession *_audioSession;
    CUAudioRequest *_currentRequest;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    unsigned int _invalidateFlags;
    struct NSMutableArray *_playRequests;
    struct NSMutableDictionary *_preparedRequests;
    CUAudioPlayer *_selfRef;
    struct LogCategory *_ucat;
    unsigned int _flags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) unsigned int flags;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)_invalidated;
- (void)activate;
- (void)_processRequests;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)_invalidateWithFlags:(unsigned int)arg1;
- (void)playPreparedIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_playPreparedIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_playURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareURL:(id)arg1 identifier:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareURL:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_abortRequestsWithError:(id)arg1;
- (void)audioSessionInterrupted:(id)arg1;

@end
