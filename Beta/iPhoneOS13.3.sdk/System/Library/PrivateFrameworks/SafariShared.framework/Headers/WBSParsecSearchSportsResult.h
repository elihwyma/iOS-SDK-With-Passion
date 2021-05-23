/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecLegacySearchResult.h>

@class NSArray, NSString, WBSParsecSearchSportsAttributionExtraCompletionItem, WBSParsecSportsScoreSummary;

@interface WBSParsecSearchSportsResult : WBSParsecLegacySearchResult

{
    WBSParsecSportsScoreSummary *_scoreSummary;
    WBSParsecSearchSportsAttributionExtraCompletionItem *_extraCompletionItem;
}

@property (copy, nonatomic, readonly) NSArray *images;
@property (copy, nonatomic, readonly) NSArray *individualScores;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem;

+ (id)_specializedSchema;

- (id)initWithDictionary:(id)arg1;

@end
