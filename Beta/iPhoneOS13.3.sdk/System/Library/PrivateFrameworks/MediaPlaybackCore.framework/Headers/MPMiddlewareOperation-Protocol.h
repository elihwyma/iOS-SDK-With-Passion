/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSArray, NSError;

@protocol MPMiddlewareOperation <Swift>

@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;

@end
