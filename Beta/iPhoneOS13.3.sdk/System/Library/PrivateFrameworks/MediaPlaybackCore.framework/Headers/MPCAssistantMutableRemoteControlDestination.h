/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCAssistantRemoteControlDestination.h>

@class NSArray, NSString;

@interface MPCAssistantMutableRemoteControlDestination : MPCAssistantRemoteControlDestination

@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *playerID;
@property (nonatomic) void *origin;
@property (copy, nonatomic) NSArray *outputDeviceUIDs;
@property (copy, nonatomic) NSArray *hashedOutputDeviceUIDs;
@property (copy, nonatomic) NSArray *outputGroups;
@property (copy, nonatomic) NSString *outputGroupID;
@property (nonatomic) _Bool singleGroup;

@end
