/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NSMapTable;

@protocol FCContentContext, FCCoreConfiguration, FCFeedPersonalizing;

@interface FCFeedItemHeadlinesOperation : FCOperation

{
    _Bool _shouldFilterHeadlinesWithoutSourceChannels;
    id <FCCoreConfiguration> _configuration;
    id <FCContentContext> _context;
    NSArray *_feedItems;
    id <FCFeedPersonalizing> _personalizer;
    NSMapTable *_feedItemScoreProfiles;
    long long _feedPersonalizationConfigurationSet;
    CDUnknownBlockType _rapidUpdateRefreshTest;
    NSDictionary *_feedContextByFeedID;
    NSDictionary *_feedIDsByArticleID;
    CDUnknownBlockType _headlinesCompletionHandler;
    CDUnknownBlockType _headlinesMapCompletionHandler;
    NSArray *_resultHeadlines;
    NSMapTable *_resultHeadlinesByFeedItem;
}

@property (retain, nonatomic) NSArray *resultHeadlines;
@property (retain, nonatomic) NSMapTable *resultHeadlinesByFeedItem;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) id <FCContentContext> context;
@property (copy, nonatomic) NSArray *feedItems;
@property (retain, nonatomic) id <FCFeedPersonalizing> personalizer;
@property (copy, nonatomic) NSMapTable *feedItemScoreProfiles;
@property (nonatomic) long long feedPersonalizationConfigurationSet;
@property (nonatomic) _Bool shouldFilterHeadlinesWithoutSourceChannels;
@property (copy, nonatomic) CDUnknownBlockType rapidUpdateRefreshTest;
@property (copy, nonatomic) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic) NSDictionary *feedIDsByArticleID;
@property (copy, nonatomic) CDUnknownBlockType headlinesCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType headlinesMapCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_fetchUnadornedHeadlinesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
