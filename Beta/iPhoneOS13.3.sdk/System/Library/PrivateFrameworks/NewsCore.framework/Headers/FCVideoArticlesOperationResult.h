/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCColor, FCColorGradient, NSArray, NSString, NTPBDiscoverMoreVideosInfo;

@interface FCVideoArticlesOperationResult : NSObject

{
    NSArray *_headlines;
    NSString *_channelID;
    NSString *_titleText;
    FCColor *_titleColor;
    FCColor *_darkStyleTitleColor;
    NSString *_subtitleText;
    FCColorGradient *_backgroundColorGradient;
    FCColorGradient *_darkStyleBackgroundColorGradient;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NSString *_mutingChannelID;
}

@property (nonatomic, readonly) NSArray *headlines;
@property (copy, nonatomic, readonly) NSString *channelID;
@property (copy, nonatomic, readonly) NSString *titleText;
@property (copy, nonatomic, readonly) FCColor *titleColor;
@property (copy, nonatomic, readonly) FCColor *darkStyleTitleColor;
@property (copy, nonatomic, readonly) NSString *subtitleText;
@property (copy, nonatomic, readonly) FCColorGradient *backgroundColorGradient;
@property (copy, nonatomic, readonly) FCColorGradient *darkStyleBackgroundColorGradient;
@property (copy, nonatomic, readonly) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (copy, nonatomic, readonly) NSString *mutingChannelID;

- (id)initWithVideoGroupConfig:(id)arg1 headlines:(id)arg2;

@end
