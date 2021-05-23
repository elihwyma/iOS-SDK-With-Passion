/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCPlayerRequest, MPCStoreFrontLocalEquivalencyMiddleware, MPModelGenericObject, NSArray, NSError, NSIndexPath, NSMapTable, NSString;

@interface MPCStoreFrontLocalEquivalencyMiddlewareOperation : MPAsyncOperation

{
    struct NSMapTable *_inputOperations;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCStoreFrontLocalEquivalencyMiddleware *_middleware;
    MPCPlayerRequest *_playerRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MPModelGenericObject *overridePlayingItem;
@property (nonatomic, readonly) NSIndexPath *playingItemIndexPath;
@property (retain, nonatomic) MPCStoreFrontLocalEquivalencyMiddleware *middleware;
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
