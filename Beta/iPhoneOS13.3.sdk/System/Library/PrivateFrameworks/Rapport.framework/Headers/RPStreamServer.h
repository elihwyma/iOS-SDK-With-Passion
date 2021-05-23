/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, RPMessageable;

@interface RPStreamServer : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    id _selfRef;
    struct NSMutableDictionary *_streamSessions;
    unsigned int _streamFlags;
    CDUnknownBlockType _invalidationHandler;
    id <RPMessageable> _messenger;
    CDUnknownBlockType _streamAcceptHandler;
    CDUnknownBlockType _streamPrepareHandlerEx;
    CDUnknownBlockType _streamPrepareHandler;
}

@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (retain, nonatomic) id <RPMessageable> messenger;
@property (copy, nonatomic) CDUnknownBlockType streamAcceptHandler;
@property (nonatomic) unsigned int streamFlags;
@property (copy, nonatomic) CDUnknownBlockType streamPrepareHandlerEx;
@property (copy, nonatomic) CDUnknownBlockType streamPrepareHandler;

- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end
