/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSArray, NSMapTable;

@protocol MPMiddlewareAutomaticDependencyOperation <Swift>

@property (nonatomic, readonly) NSArray *inputProtocols;
@property (nonatomic, readonly) NSArray *outputProtocols;
@property (retain, nonatomic) NSMapTable *inputOperations;

@end
