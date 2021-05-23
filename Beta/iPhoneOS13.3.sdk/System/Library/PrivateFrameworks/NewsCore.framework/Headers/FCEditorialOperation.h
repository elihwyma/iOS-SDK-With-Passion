/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCSpotlightOperationResult, FCVideoArticlesOperationResult, NSArray, NSError;

@protocol FCCoreConfiguration;

@interface FCEditorialOperation : FCOperation

{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    NSArray *_trendingHeadlines;
    FCVideoArticlesOperationResult *_topVideosResult;
    FCVideoArticlesOperationResult *_moreVideosResult;
    FCSpotlightOperationResult *_spotlightResult;
    NSError *_error;
    CDUnknownBlockType _catchUpCompletionHandler;
    NSArray *_editorialSectionGroups;
}

@property (copy) NSArray *trendingHeadlines;
@property (retain) FCVideoArticlesOperationResult *topVideosResult;
@property (retain) FCVideoArticlesOperationResult *moreVideosResult;
@property (copy) NSArray *editorialSectionGroups;
@property (retain) FCSpotlightOperationResult *spotlightResult;
@property (retain) NSError *error;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy) CDUnknownBlockType catchUpCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)enumerateEditorialSectionsByRecencyWithBlock:(CDUnknownBlockType)arg1;

@end
