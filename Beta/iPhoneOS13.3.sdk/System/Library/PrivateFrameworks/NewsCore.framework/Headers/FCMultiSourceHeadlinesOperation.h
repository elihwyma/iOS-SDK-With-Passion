/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, NSArray, NSDictionary, NSSet;

@protocol FCContentContext, FCCoreConfiguration;

@interface FCMultiSourceHeadlinesOperation : FCOperation

{
    _Bool _shouldBypassRecordSourcePersistence;
    id <FCCoreConfiguration> _configuration;
    id <FCContentContext> _context;
    NSArray *_articleListIDs;
    NSSet *_articleIDs;
    FCCachePolicy *_cachePolicyForArticleLists;
    NSArray *_networkEvents;
    NSDictionary *_heldRecordsByType;
    CDUnknownBlockType _headlinesCompletionHandler;
    NSDictionary *_resultArticleListHeadlinesByArticleListID;
    NSDictionary *_resultArticleListsByID;
    NSDictionary *_resultArticleIDHeadlinesByArticleID;
}

@property (retain, nonatomic) NSDictionary *resultArticleListHeadlinesByArticleListID;
@property (retain, nonatomic) NSDictionary *resultArticleListsByID;
@property (retain, nonatomic) NSDictionary *resultArticleIDHeadlinesByArticleID;
@property (copy, nonatomic) NSArray *networkEvents;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) id <FCContentContext> context;
@property (copy, nonatomic) NSArray *articleListIDs;
@property (copy, nonatomic) NSSet *articleIDs;
@property (retain, nonatomic) FCCachePolicy *cachePolicyForArticleLists;
@property (nonatomic) _Bool shouldBypassRecordSourcePersistence;
@property (retain, nonatomic) NSDictionary *heldRecordsByType;
@property (copy, nonatomic) CDUnknownBlockType headlinesCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end
