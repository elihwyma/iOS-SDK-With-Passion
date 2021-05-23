/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsTransport/NTPBSectionDisplayDescriptor.h>

@class NSURL, NTPBDiscoverMoreVideosInfo;

@interface NTPBSectionDisplayDescriptor (NTAdditions)

@property (copy, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (copy, nonatomic) NSURL *actionURL;

@end
