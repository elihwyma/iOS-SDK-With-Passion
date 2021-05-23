/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCGroupConfig.h>

@class NSArray, NSDate, NSDictionary;

@interface FCTopStoriesGroupConfig : FCGroupConfig

{
    NSArray *_mandatoryArticleIDPairs;
    NSArray *_optionalArticleIDs;
    NSDictionary *_topStoriesMetadataByArticleID;
    NSDate *_publishDate;
}

@property (retain, nonatomic) NSDictionary *topStoriesMetadataByArticleID;
@property (nonatomic, readonly) NSArray *mandatoryArticleIDPairs;
@property (nonatomic, readonly) NSArray *optionalArticleIDs;
@property (nonatomic, readonly) NSDate *publishDate;

- (id)initWithDictionary:(id)arg1;

@end
