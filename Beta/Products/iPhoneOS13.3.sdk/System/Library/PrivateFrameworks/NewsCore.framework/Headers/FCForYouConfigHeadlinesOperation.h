/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouConfigHeadlinesOperation : FCOperation {
    NSArray * _additionalArticleListIDs;
    NSArray * _additionalTagIDs;
    FCCachePolicy * _articleListCachePolicy;
    <FCForYouBridgedConfigurationParser> * _bridgedConfigurationParser;
    <FCCoreConfiguration> * _configuration;
    <FCContentContext> * _context;
    FCCachePolicy * _editorialSectionTagCachePolicy;
    long long  _fields;
    FCCachePolicy * _forYouConfigCachePolicy;
    id /* block */  _headlinesAndTagsCompletionHandler;
    id /* block */  _headlinesCompletionHandler;
    <FCFeedPersonalizing> * _personalizer;
    NSDictionary * _resultArticleListsByID;
    FCForYouConfig * _resultForYouConfig;
    NSDictionary * _resultHeadlinesByArticleID;
    NSDictionary * _resultHeadlinesByArticleListID;
    NSDictionary * _resultTagsByID;
    bool  _shouldFetchEditorialSectionTags;
}

@property (nonatomic, copy) NSArray *additionalArticleListIDs;
@property (nonatomic, copy) NSArray *additionalTagIDs;
@property (nonatomic, retain) FCCachePolicy *articleListCachePolicy;
@property (nonatomic, retain) <FCForYouBridgedConfigurationParser> *bridgedConfigurationParser;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, retain) FCCachePolicy *editorialSectionTagCachePolicy;
@property (nonatomic) long long fields;
@property (nonatomic, retain) FCCachePolicy *forYouConfigCachePolicy;
@property (nonatomic, copy) id /* block */ headlinesAndTagsCompletionHandler;
@property (nonatomic, copy) id /* block */ headlinesCompletionHandler;
@property (nonatomic, retain) <FCFeedPersonalizing> *personalizer;
@property (nonatomic, retain) NSDictionary *resultArticleListsByID;
@property (nonatomic, retain) FCForYouConfig *resultForYouConfig;
@property (nonatomic, retain) NSDictionary *resultHeadlinesByArticleID;
@property (nonatomic, retain) NSDictionary *resultHeadlinesByArticleListID;
@property (nonatomic, retain) NSDictionary *resultTagsByID;
@property (nonatomic) bool shouldFetchEditorialSectionTags;

- (void).cxx_destruct;
- (id)_edgeCacheHint;
- (id)additionalArticleListIDs;
- (id)additionalTagIDs;
- (id)articleListCachePolicy;
- (id)bridgedConfigurationParser;
- (id)configuration;
- (id)context;
- (id)editorialSectionTagCachePolicy;
- (long long)fields;
- (id)forYouConfigCachePolicy;
- (id /* block */)headlinesAndTagsCompletionHandler;
- (id /* block */)headlinesCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)personalizer;
- (id)resultArticleListsByID;
- (id)resultForYouConfig;
- (id)resultHeadlinesByArticleID;
- (id)resultHeadlinesByArticleListID;
- (id)resultTagsByID;
- (void)setAdditionalArticleListIDs:(id)arg1;
- (void)setAdditionalTagIDs:(id)arg1;
- (void)setArticleListCachePolicy:(id)arg1;
- (void)setBridgedConfigurationParser:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEditorialSectionTagCachePolicy:(id)arg1;
- (void)setFields:(long long)arg1;
- (void)setForYouConfigCachePolicy:(id)arg1;
- (void)setHeadlinesAndTagsCompletionHandler:(id /* block */)arg1;
- (void)setHeadlinesCompletionHandler:(id /* block */)arg1;
- (void)setPersonalizer:(id)arg1;
- (void)setResultArticleListsByID:(id)arg1;
- (void)setResultForYouConfig:(id)arg1;
- (void)setResultHeadlinesByArticleID:(id)arg1;
- (void)setResultHeadlinesByArticleListID:(id)arg1;
- (void)setResultTagsByID:(id)arg1;
- (void)setShouldFetchEditorialSectionTags:(bool)arg1;
- (bool)shouldFetchEditorialSectionTags;
- (bool)validateOperation;

@end