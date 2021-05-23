/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlayerPath, MPCPlayerResponse;

@interface _MPCPlayerCommand : NSObject

{
    MPCPlayerResponse *_response;
    MPCPlayerPath *_playerPath;
}

@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (copy, nonatomic, readonly) MPCPlayerPath *playerPath;

- (id)initWithResponse:(id)arg1;
- (id)initWithPlayerPath:(id)arg1;

@end
