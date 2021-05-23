/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCForYouConfig, FCTopStoriesOperationResult, NSError;

@protocol FCChannelProviding, FCCoreConfiguration;

@interface FCTopStoriesOperation : FCOperation

{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    id <FCChannelProviding> _topStoriesChannel;
    FCTopStoriesOperationResult *_topStoriesResult;
    FCForYouConfig *_forYouConfig;
    NSError *_error;
    CDUnknownBlockType _catchUpCompletionHandler;
}

@property (copy) id <FCChannelProviding> topStoriesChannel;
@property (retain) FCTopStoriesOperationResult *topStoriesResult;
@property (retain) FCForYouConfig *forYouConfig;
@property (retain) NSError *error;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy) CDUnknownBlockType catchUpCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_checkShouldShowTopStoriesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
