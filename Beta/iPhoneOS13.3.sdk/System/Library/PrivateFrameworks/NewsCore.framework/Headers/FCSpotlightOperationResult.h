/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCColor, NSDate, NSString;

@protocol FCCardStyleProviding, FCHeadlineProviding;

@interface FCSpotlightOperationResult : NSObject

{
    id <FCHeadlineProviding> _headline;
    NSString *_channelID;
    NSString *_eyebrowTitle;
    NSString *_titleText;
    NSString *_subTitleText;
    NSString *_ctaText;
    FCColor *_titleColor;
    NSDate *_publishDate;
    id <FCCardStyleProviding> _spotlightItemStyle;
    id <FCCardStyleProviding> _spotlightItemDarkStyle;
}

@property (nonatomic, readonly) id <FCHeadlineProviding> headline;
@property (copy, nonatomic, readonly) NSString *channelID;
@property (copy, nonatomic, readonly) NSString *eyebrowTitle;
@property (copy, nonatomic, readonly) NSString *titleText;
@property (copy, nonatomic, readonly) NSString *subTitleText;
@property (copy, nonatomic, readonly) NSString *ctaText;
@property (copy, nonatomic, readonly) FCColor *titleColor;
@property (copy, nonatomic, readonly) NSDate *publishDate;
@property (copy, nonatomic, readonly) id <FCCardStyleProviding> spotlightItemStyle;
@property (copy, nonatomic, readonly) id <FCCardStyleProviding> spotlightItemDarkStyle;

- (id)initWithSpotlightGroupConfig:(id)arg1 headline:(id)arg2;

@end
