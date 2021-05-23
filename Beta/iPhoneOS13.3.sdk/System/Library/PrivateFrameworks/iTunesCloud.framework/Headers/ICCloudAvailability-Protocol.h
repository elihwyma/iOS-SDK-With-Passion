/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/Swift-Protocol.h>

@protocol ICCloudAvailability <Swift>

- (unsigned short)hasProperNetworkConditionsToPlayMedia;
- (unsigned short)hasProperNetworkConditionsToShowCloudMedia;
- (unsigned short)isCellularDataRestrictedForMusic;
- (unsigned short)shouldProhibitMusicActionForCurrentNetworkConditions;
- (unsigned short)isCellularDataRestrictedForVideos;
- (unsigned short)shouldProhibitVideosActionForCurrentNetworkConditions;
- (unsigned short)isCellularDataRestrictedForStoreApps;
- (unsigned short)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (unsigned short)canShowCloudDownloadButtons;
- (unsigned short)canShowCloudMusic;
- (unsigned short)canShowCloudVideo;

@end
