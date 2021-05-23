/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDeflatedFeedGroup, FCFeedDescriptor, FCFeedGroup;

@protocol FCCoreConfiguration;

@interface FCInflateFeedGroupOperation : FCOperation

{
    _Bool _cachedOnly;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedDescriptor *_feedDescriptor;
    FCDeflatedFeedGroup *_deflatedGroup;
    CDUnknownBlockType _inflationCompletionHandler;
    FCFeedGroup *_inflatedGroup;
}

@property (retain, nonatomic) FCFeedGroup *inflatedGroup;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (retain, nonatomic) FCDeflatedFeedGroup *deflatedGroup;
@property (nonatomic) _Bool cachedOnly;
@property (copy, nonatomic) CDUnknownBlockType inflationCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_fetchHeadlinesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchTagsForPBGroup:(id)arg1 sharedStrings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchHeadlinesWithDeflatedHeadlines:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
