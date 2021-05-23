/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlaybackEngine, NSArray, NSString;

@interface MPCPlaybackEngineMiddleware : NSObject

{
    NSArray *_invalidationObservers;
    MPCPlaybackEngine *_playbackEngine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *invalidationObservers;

- (id)_stateDumpObject;
- (id)operationsForRequest:(id)arg1;
- (id)playerVideoView:(id)arg1 chain:(id)arg2;
- (id)operationsForPlayerRequest:(id)arg1;

@end
