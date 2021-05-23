/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol ICCloudServerListenerEndpointProvider, OS_dispatch_queue;

@interface ICCloudClientAvailabilityService : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <ICCloudServerListenerEndpointProvider> _listenerEndpointProvider;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;
@property (weak, nonatomic, readonly) id <ICCloudServerListenerEndpointProvider> listenerEndpointProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)hasProperNetworkConditionsToPlayMedia;
- (_Bool)hasProperNetworkConditionsToShowCloudMedia;
- (_Bool)isCellularDataRestrictedForMusic;
- (_Bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForVideos;
- (_Bool)shouldProhibitVideosActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForStoreApps;
- (_Bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestricted;
- (_Bool)shouldProhibitActionsForCurrentNetworkConditions;
- (_Bool)canShowCloudDownloadButtons;
- (_Bool)canShowCloudMusic;
- (_Bool)canShowCloudVideo;
- (id)_xpcConnectionWithListenerEndpoint:(id)arg1;
- (id)initWithListenerEndpointProvider:(id)arg1;

@end
