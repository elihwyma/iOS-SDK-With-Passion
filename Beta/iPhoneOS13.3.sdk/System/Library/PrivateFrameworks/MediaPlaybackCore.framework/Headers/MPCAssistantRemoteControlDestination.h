/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MPCAssistantRemoteControlDestination : NSObject

{
    NSString *_appBundleID;
    NSString *_playerID;
    void *_origin;
    NSArray *_outputDeviceUIDs;
    NSArray *_hashedOutputDeviceUIDs;
    NSArray *_outputGroups;
    NSString *_outputGroupID;
    _Bool _singleGroup;
}

@property (nonatomic, readonly) NSString *appBundleID;
@property (nonatomic, readonly) NSString *playerID;
@property (nonatomic, readonly) void *origin;
@property (nonatomic, readonly) NSArray *outputDeviceUIDs;
@property (nonatomic, readonly) NSArray *hashedOutputDeviceUIDs;
@property (nonatomic, readonly) NSArray *outputGroups;
@property (nonatomic, readonly) NSString *outputGroupID;
@property (nonatomic, readonly) _Bool singleGroup;

+ (id)systemMediaApplicationDestination;
+ (id)watchRadioApplicationDestination;
+ (id)podcastsApplicationDestination;
+ (id)iBooksApplicationDestination;
+ (id)nowPlayingApplicationDestination;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (void *)createPlayerPath;
- (id)initWithAppBundleID:(id)arg1;
- (id)initWithAppBundleID:(id)arg1 playerID:(id)arg2 origin:(void *)arg3;
- (void)resolveWithHashedRouteIdentifiers:(id)arg1 audioRoutingInfo:(CDStruct_8024420c)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resolveWithQueue:(id)arg1 hashedRouteIdentifiers:(id)arg2 localPlaybackPermitted:(_Bool)arg3 audioRoutingInfo:(CDStruct_8024420c)arg4 completion:(CDUnknownBlockType)arg5;
- (void)resolveWithRouteIdentifiers:(id)arg1 audioRoutingInfo:(CDStruct_8024420c)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resolveWithQueue:(id)arg1 routeIdentifiers:(id)arg2 localPlaybackPermitted:(_Bool)arg3 audioRoutingInfo:(CDStruct_8024420c)arg4 completion:(CDUnknownBlockType)arg5;
- (void)resolveWithHashedRouteIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveWithRouteIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveWithQueue:(id)arg1 hashedRouteIdentifiers:(id)arg2 localPlaybackPermitted:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resolveWithQueue:(id)arg1 routeIdentifiers:(id)arg2 localPlaybackPermitted:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_getCompanionOrigin:(CDUnknownBlockType)arg1;

@end
