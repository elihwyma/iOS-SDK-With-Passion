/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCGroupConfig.h>

@class NSArray, NSDictionary, NSString;

@interface FCVideoGroupConfig : FCGroupConfig

{
    NSArray *_topVideosArticleIDs;
    NSDictionary *_topVideosMetadataByArticleID;
    NSString *_mutingChannelID;
}

@property (copy, nonatomic) NSString *mutingChannelID;
@property (nonatomic, readonly) NSArray *topVideosArticleIDs;
@property (nonatomic, readonly) NSDictionary *topVideosMetadataByArticleID;
@property (nonatomic, readonly) NSString *discoverMoreVideosTitle;
@property (nonatomic, readonly) NSString *discoverMoreVideosSubtitle;
@property (nonatomic, readonly) NSString *discoverMoreVideosURLString;

- (id)initWithDictionary:(id)arg1;

@end
