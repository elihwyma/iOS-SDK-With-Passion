/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCPlaybackEngineMiddleware, MPCPlayerRequest, NSArray, NSError, NSMapTable, NSString;

@interface MPCPlaybackEngineMiddlewareOperation : MPAsyncOperation

{
    struct NSMapTable *_inputOperations;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCPlaybackEngineMiddleware *_middleware;
    MPCPlayerRequest *_playerRequest;
}

@property (retain, nonatomic) MPCPlaybackEngineMiddleware *middleware;
@property (retain, nonatomic) MPCPlayerRequest *playerRequest;
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
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;

@end
