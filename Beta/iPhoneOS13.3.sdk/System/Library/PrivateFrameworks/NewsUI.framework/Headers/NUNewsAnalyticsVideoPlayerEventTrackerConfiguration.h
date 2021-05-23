/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSData, NSString, NTPBWidgetEngagement;

@interface NUNewsAnalyticsVideoPlayerEventTrackerConfiguration : NSObject <Swift>

{
    int _adType;
    int _adLocation;
    int _newsProductType;
    int _mediaEngagePlayLocation;
    int _mediaEngageCompletePlayLocation;
    int _articleHostViewType;
    int _groupType;
    int _linkTapLocationType;
    int _articleViewPresentationReason;
    int _autoPlayArticleViewPresentationReason;
    int _parentFeedType;
    unsigned long long _supplementalEventOptions;
    NSString *_groupViewExposureID;
    NTPBWidgetEngagement *_widgetEngagement;
    NSString *_referringURLString;
    NSString *_referringSourceApplication;
    NSData *_leadingVideoItemSessionID;
}

@property (nonatomic, readonly) int adType;
@property (nonatomic, readonly) int adLocation;
@property (nonatomic, readonly) int newsProductType;
@property (nonatomic, readonly) int mediaEngagePlayLocation;
@property (nonatomic, readonly) int mediaEngageCompletePlayLocation;
@property (nonatomic, readonly) int articleHostViewType;
@property (nonatomic, readonly) unsigned long long supplementalEventOptions;
@property (nonatomic, readonly) int groupType;
@property (copy, nonatomic, readonly) NSString *groupViewExposureID;
@property (nonatomic, readonly) int linkTapLocationType;
@property (nonatomic, readonly) int articleViewPresentationReason;
@property (nonatomic, readonly) int autoPlayArticleViewPresentationReason;
@property (copy, nonatomic, readonly) NTPBWidgetEngagement *widgetEngagement;
@property (copy, nonatomic, readonly) NSString *referringURLString;
@property (copy, nonatomic, readonly) NSString *referringSourceApplication;
@property (copy, nonatomic, readonly) NSData *leadingVideoItemSessionID;
@property (nonatomic, readonly) int parentFeedType;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdType:(int)arg1 adLocation:(int)arg2 newsProductType:(int)arg3 mediaEngagePlayLocation:(int)arg4 mediaEngageCompletePlayLocation:(int)arg5 articleHostViewType:(int)arg6 supplementalEventOptions:(unsigned long long)arg7 groupType:(int)arg8 groupViewExposureID:(id)arg9 linkTapLocationType:(int)arg10 articleViewPresentationReason:(int)arg11 autoPlayArticleViewPresentationReason:(int)arg12 widgetEngagement:(id)arg13 referringURLString:(id)arg14 referringSourceApplication:(id)arg15 leadingVideoItemSessionID:(id)arg16 parentFeedType:(int)arg17;

@end
