/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@class NSString, NSURL, NTPBDiscoverMoreVideosInfo;

@protocol NTSectionDisplayDescriptor <Swift>

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *nameColor;
@property (copy, nonatomic, readonly) NSString *actionTitle;
@property (copy, nonatomic, readonly) NSURL *actionURL;
@property (nonatomic, readonly) _Bool displaysAsVideoPlaylist;
@property (nonatomic, readonly) _Bool useNameColorInWidget;
@property (copy, nonatomic, readonly) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (copy, nonatomic, readonly) NSString *backgroundGradientColor;
@property (nonatomic, readonly) _Bool videoPlaysMutedByDefault;

@end
