/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPAVRoute, NSString;

@interface MPCPlayerPath : NSObject <Swift>

{
    int _pid;
    _Bool _resolved;
    NSString *_bundleID;
    NSString *_playerID;
    void *_mediaRemotePlayerPath;
    NSString *_deviceUID;
    MPAVRoute *_route;
}

@property (nonatomic, readonly) void *mediaRemotePlayerPath;
@property (nonatomic, readonly) NSString *deviceUID;
@property (copy, nonatomic, readonly) NSString *representedBundleDisplayName;
@property (copy, nonatomic, readonly) NSString *representedBundleID;
@property (nonatomic, readonly) MPAVRoute *route;
@property (nonatomic, readonly, getter=isSystemMusicPath) _Bool systemMusicPath;
@property (nonatomic, readonly, getter=isResolved) _Bool resolved;
@property (nonatomic, readonly, getter=isFullyResolved) _Bool fullyResolved;
@property (nonatomic, readonly) void *origin;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *playerID;
@property (nonatomic, readonly, getter=isInProcess) _Bool inProcess;

+ (_Bool)supportsSecureCoding;
+ (id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2;
+ (id)deviceActivePlayerPath;
+ (id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void *)arg2 isResolved:(_Bool)arg3;
+ (id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
+ (id)pathWithDeviceUIDs:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
+ (id)pathWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
+ (id)pathWithCustomOrigin:(void *)arg1 bundleID:(id)arg2 playerID:(id)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pathByAppendingPlayerIDSuffix:(id)arg1;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
- (id)initWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
- (void)resolveWithRouteResolvedHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveWithCompletion:(CDUnknownBlockType)arg1;

@end
