/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, FCForYouConfig, NSArray, NSDictionary;

@protocol FCContentContext, FCCoreConfiguration, FCFeedPersonalizing, FCForYouBridgedConfigurationParser;

@interface FCForYouConfigHeadlinesOperation : FCOperation

{
    _Bool _shouldFetchEditorialSectionTags;
    id <FCCoreConfiguration> _configuration;
    id <FCContentContext> _context;
    id <FCFeedPersonalizing> _personalizer;
    id <FCForYouBridgedConfigurationParser> _bridgedConfigurationParser;
    long long _fields;
    NSArray *_additionalArticleListIDs;
    NSArray *_additionalTagIDs;
    FCCachePolicy *_forYouConfigCachePolicy;
    FCCachePolicy *_articleListCachePolicy;
    FCCachePolicy *_editorialSectionTagCachePolicy;
    CDUnknownBlockType _headlinesCompletionHandler;
    CDUnknownBlockType _headlinesAndTagsCompletionHandler;
    FCForYouConfig *_resultForYouConfig;
    NSDictionary *_resultArticleListsByID;
    NSDictionary *_resultHeadlinesByArticleListID;
    NSDictionary *_resultHeadlinesByArticleID;
    NSDictionary *_resultTagsByID;
}

@property (retain, nonatomic) FCForYouConfig *resultForYouConfig;
@property (retain, nonatomic) NSDictionary *resultArticleListsByID;
@property (retain, nonatomic) NSDictionary *resultHeadlinesByArticleListID;
@property (retain, nonatomic) NSDictionary *resultHeadlinesByArticleID;
@property (retain, nonatomic) NSDictionary *resultTagsByID;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) id <FCFeedPersonalizing> personalizer;
@property (retain, nonatomic) id <FCForYouBridgedConfigurationParser> bridgedConfigurationParser;
@property (nonatomic) long long fields;
@property (copy, nonatomic) NSArray *additionalArticleListIDs;
@property (copy, nonatomic) NSArray *additionalTagIDs;
@property (nonatomic) _Bool shouldFetchEditorialSectionTags;
@property (retain, nonatomic) FCCachePolicy *forYouConfigCachePolicy;
@property (retain, nonatomic) FCCachePolicy *articleListCachePolicy;
@property (retain, nonatomic) FCCachePolicy *editorialSectionTagCachePolicy;
@property (copy, nonatomic) CDUnknownBlockType headlinesCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType headlinesAndTagsCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_edgeCacheHint;

@end
