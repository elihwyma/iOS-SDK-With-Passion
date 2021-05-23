/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCFuture, MPCMediaRemoteController, MPCMediaRemoteMiddleware, MPCPlayerPath, NSArray, NSError, NSMapTable, NSString;

@interface MPCMediaRemoteMiddlewareControllerOperation : MPAsyncOperation

{
    struct NSMapTable *_inputOperations;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCMediaRemoteMiddleware *_middleware;
    MPCPlayerPath *_playerPath;
    MPCFuture *_controllerFuture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MPCFuture *controllerFuture;
@property (nonatomic, readonly) MPCMediaRemoteController *controller;
@property (retain, nonatomic) MPCMediaRemoteMiddleware *middleware;
@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (retain, nonatomic) MPCFuture *controllerFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, readonly) NSArray *inputProtocols;
@property (nonatomic, readonly) NSArray *outputProtocols;
@property (retain, nonatomic) NSMapTable *inputOperations;

- (void)execute;
- (id)timeoutDescription;
- (id)initWithMiddleware:(id)arg1 playerPath:(id)arg2;

@end
