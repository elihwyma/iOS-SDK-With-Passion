/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NMRNowPlayingClient : NSObject

{
    void *_mediaRemoteNowPlayingClient;
    NSString *_bundleIdentifier;
    NSString *_displayName;
}

@property (nonatomic, readonly) void *mediaRemoteNowPlayingClient;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *displayName;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMRNowPlayingClient:(void *)arg1;

@end
