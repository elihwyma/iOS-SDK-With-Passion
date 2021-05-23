/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPCFuture, MPCMediaRemoteMiddleware, NSArray, NSError, NSString;

@interface MPCMediaRemoteMiddlewareCommandsOperation : MPAsyncOperation <Swift>

{
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCMediaRemoteMiddleware *_middleware;
    MPCFuture *_supportedCommandsFuture;
}

@property (retain, nonatomic) MPCMediaRemoteMiddleware *middleware;
@property (retain, nonatomic) MPCFuture *supportedCommandsFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;

- (void)execute;
- (id)timeoutDescription;
- (id)initWithMiddleware:(id)arg1;

@end
