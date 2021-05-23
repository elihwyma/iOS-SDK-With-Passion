/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCFeedDescriptor, FCFeedViewport, FCFeedViewportBookmark, FCFeedViewportDiff;

@protocol FCCoreConfiguration, FCFeedElement;

@interface FCFeedViewportExpandGapOperation : FCOperation

{
    _Bool _lightweightOnly;
    _Bool _cachedOnly;
    _Bool _offlineMode;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedViewport *_viewport;
    FCFeedDescriptor *_feedDescriptor;
    id <FCFeedElement> _gapElement;
    unsigned long long _desiredHeadlineCount;
    FCFeedViewportBookmark *_bookmark;
    unsigned long long _gapExpansionDirection;
    long long _gapExpansionPolicy;
    CDUnknownBlockType _expandGapCompletionHandler;
    FCFeedViewport *_sanitizedViewport;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_resultDiff;
}

@property (retain, nonatomic) FCFeedViewport *sanitizedViewport;
@property (retain, nonatomic) FCFeedViewport *resultViewport;
@property (retain, nonatomic) FCFeedViewportDiff *resultDiff;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) id <FCFeedElement> gapElement;
@property (nonatomic) unsigned long long desiredHeadlineCount;
@property (copy, nonatomic) FCFeedViewportBookmark *bookmark;
@property (nonatomic) unsigned long long gapExpansionDirection;
@property (nonatomic) long long gapExpansionPolicy;
@property _Bool lightweightOnly;
@property (nonatomic) _Bool cachedOnly;
@property _Bool offlineMode;
@property (copy, nonatomic) CDUnknownBlockType expandGapCompletionHandler;

+ (id)_sanitizeViewport:(id)arg1 context:(id)arg2 feedDescriptor:(id)arg3 configuration:(id)arg4;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (void)_fetchAssetsForInsertedGroup:(id)arg1 cachedOnly:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
