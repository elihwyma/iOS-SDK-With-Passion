/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCGroupConfig.h>

@class NSDate, NSString;

@protocol FCCardStyleProviding;

@interface FCSpotlightGroupConfig : FCGroupConfig

{
    NSString *_spotlightArticleID;
    NSDate *_publishDate;
}

@property (copy, nonatomic, readonly) NSString *spotlightArticleID;
@property (copy, nonatomic, readonly) NSDate *publishDate;
@property (copy, nonatomic, readonly) NSString *spotlightCallToActionTitle;
@property (copy, nonatomic, readonly) NSString *spotlightEyebrowTitle;
@property (copy, nonatomic, readonly) id <FCCardStyleProviding> spotlightItemStyle;
@property (copy, nonatomic, readonly) id <FCCardStyleProviding> spotlightItemDarkStyle;

- (id)initWithDictionary:(id)arg1;

@end
