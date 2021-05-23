/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPCFuture;

@interface MPCFutureInvalidationToken : NSObject <Swift>

{
    MPCFuture *_future;
}

@property (retain, nonatomic) MPCFuture *future;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
