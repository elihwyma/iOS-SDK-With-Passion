/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute

{
    MPAVRouteConnection *_connection;
    void *_television;
}

@property (nonatomic, readonly) void *television;

- (void)dealloc;
- (id)connection;
- (long long)routeType;
- (id)routeUID;
- (long long)routeSubtype;
- (id)initWithTelevision:(void *)arg1;

@end
