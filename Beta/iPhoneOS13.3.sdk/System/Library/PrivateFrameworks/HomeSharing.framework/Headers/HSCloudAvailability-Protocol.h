/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/Swift-Protocol.h>

@protocol HSCloudAvailability <Swift>

- (unsigned short)hasProperNetworkConditionsToPlayMedia;
- (unsigned short)hasProperNetworkConditionsToShowCloudMedia;
- (unsigned short)isCellularDataRestrictedForMusic;
- (unsigned short)shouldProhibitMusicActionForCurrentNetworkConditions;
- (unsigned short)isCellularDataRestrictedForVideos;
- (unsigned short)shouldProhibitVideosActionForCurrentNetworkConditions;
- (unsigned short)isCellularDataRestrictedForStoreApps;
- (unsigned short)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (unsigned short)isCellularDataRestricted;
- (unsigned short)shouldProhibitActionsForCurrentNetworkConditions;
- (unsigned short)canShowCloudDownloadButtons;
- (unsigned short)canShowCloudMusic;
- (unsigned short)canShowCloudVideo;

@end
