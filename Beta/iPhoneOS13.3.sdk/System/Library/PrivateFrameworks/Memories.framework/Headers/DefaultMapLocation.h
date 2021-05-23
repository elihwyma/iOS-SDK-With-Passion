/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MapLocation.h>

__attribute__((visibility("hidden")))
@interface DefaultMapLocation : MapLocation

- (_Bool)isResolved;
- (void)resolveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isResolving;
- (_Bool)hasValidCoordinate;

@end
