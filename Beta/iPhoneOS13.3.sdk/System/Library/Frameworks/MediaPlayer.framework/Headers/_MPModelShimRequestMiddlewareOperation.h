/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelRequest, NSArray, NSError, NSString, _MPModelShimRequestMiddleware;

@interface _MPModelShimRequestMiddlewareOperation : MPAsyncOperation <Swift>

{
    NSArray *_invalidationObservers;
    CDUnknownBlockType _invalidationHandler;
    _MPModelShimRequestMiddleware *_middleware;
    MPModelRequest *_modelRequest;
}

@property (retain, nonatomic) _MPModelShimRequestMiddleware *middleware;
@property (retain, nonatomic) MPModelRequest *modelRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;

- (void)execute;
- (id)initWithMiddleware:(id)arg1 modelRequest:(id)arg2;

@end
