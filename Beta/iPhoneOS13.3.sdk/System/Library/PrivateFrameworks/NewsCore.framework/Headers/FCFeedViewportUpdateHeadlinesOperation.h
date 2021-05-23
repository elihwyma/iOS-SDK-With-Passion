/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCFeedDescriptor, FCFeedViewport, FCFeedViewportBookmark, FCFeedViewportDiff;

@protocol FCCoreConfiguration;

@interface FCFeedViewportUpdateHeadlinesOperation : FCOperation

{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedViewport *_viewport;
    FCFeedDescriptor *_feedDescriptor;
    double _maxArticleAge;
    FCFeedViewportBookmark *_fromBookmark;
    FCFeedViewportBookmark *_toBookmark;
    CDUnknownBlockType _updateHeadlinesCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_resultDiff;
    FCFeedViewportBookmark *_adjustedFromBookmark;
    FCFeedViewportBookmark *_adjustedToBookmark;
}

@property (retain, nonatomic) FCFeedViewport *resultViewport;
@property (retain, nonatomic) FCFeedViewportDiff *resultDiff;
@property (retain, nonatomic) FCFeedViewportBookmark *adjustedFromBookmark;
@property (retain, nonatomic) FCFeedViewportBookmark *adjustedToBookmark;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (nonatomic) double maxArticleAge;
@property (copy, nonatomic) FCFeedViewportBookmark *fromBookmark;
@property (copy, nonatomic) FCFeedViewportBookmark *toBookmark;
@property (copy, nonatomic) CDUnknownBlockType updateHeadlinesCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end
