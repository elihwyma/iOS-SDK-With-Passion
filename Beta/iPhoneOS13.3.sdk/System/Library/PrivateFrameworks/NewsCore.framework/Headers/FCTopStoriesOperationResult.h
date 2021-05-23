/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCColorGradient, NSArray, NSDate, NSDictionary, NSString;

@interface FCTopStoriesOperationResult : NSObject

{
    NSArray *_mandatoryHeadlinePairs;
    NSArray *_optionalHeadlines;
    NSArray *_todayFeedTopStoriesHeadlines;
    NSDate *_publishDate;
    NSDictionary *_topStoriesMetadataByArticleID;
    FCColorGradient *_backgroundColorGradient;
    FCColorGradient *_darkStyleBackgroundColorGradient;
    NSString *_subtitle;
}

@property (copy) NSArray *mandatoryHeadlinePairs;
@property (copy) NSArray *optionalHeadlines;
@property (copy) NSDictionary *topStoriesMetadataByArticleID;
@property (copy) NSDate *publishDate;
@property (copy, nonatomic) FCColorGradient *backgroundColorGradient;
@property (copy, nonatomic, readonly) NSArray *todayFeedTopStoriesHeadlines;
@property (copy, nonatomic, readonly) FCColorGradient *darkStyleBackgroundColorGradient;
@property (copy, nonatomic, readonly) NSString *subtitle;

- (id)initWithTopStoriesGroupConfig:(id)arg1 mandatoryHeadlinePairs:(id)arg2 optionalHeadlines:(id)arg3 todayFeedTopStoriesHeadlines:(id)arg4 topStoriesMetadataByArticleID:(id)arg5 publishDate:(id)arg6 subtitle:(id)arg7;

@end
