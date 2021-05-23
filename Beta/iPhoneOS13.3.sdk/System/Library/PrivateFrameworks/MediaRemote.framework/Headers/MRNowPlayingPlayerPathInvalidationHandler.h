/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class _MRNowPlayingPlayerPathProtobuf;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject

{
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _callback;
}

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) CDUnknownBlockType callback;

- (id)description;
- (id)initWithPlayerPath:(id)arg1 queue:(id)arg2 invalidationCallback:(CDUnknownBlockType)arg3;

@end
