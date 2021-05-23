/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCFeedDescriptor, FCFeedViewport, FCFeedViewportDiff;

@protocol FCCoreConfiguration;

@interface FCFeedViewportRefreshOperation : FCOperation

{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedViewport *_viewport;
    FCFeedDescriptor *_feedDescriptor;
    CDUnknownBlockType _refreshCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_resultDiff;
}

@property (retain, nonatomic) FCFeedViewport *resultViewport;
@property (retain, nonatomic) FCFeedViewportDiff *resultDiff;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) CDUnknownBlockType refreshCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_continueWithRefreshDate:(id)arg1 forYouConfig:(id)arg2;

@end
