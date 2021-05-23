/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SFShareAudioSessionClient : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)activate;
- (void)_ensureXPCStarted;
- (void)shareAudioProgressEvent:(int)arg1 info:(id)arg2;
- (void)_activate:(_Bool)arg1;
- (void)userConfirmed;

@end
