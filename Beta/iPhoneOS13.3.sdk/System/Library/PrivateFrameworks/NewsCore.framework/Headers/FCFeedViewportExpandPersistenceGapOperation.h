/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDeflatedFeedGroup, FCFeedDescriptor, FCFeedGroup, FCFeedViewport, FCFeedViewportBookmark, FCFeedViewportPersistenceGap;

@protocol FCCoreConfiguration;

@interface FCFeedViewportExpandPersistenceGapOperation : FCOperation

{
    _Bool _cachedOnly;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedDescriptor *_feedDescriptor;
    FCFeedViewport *_viewport;
    FCFeedViewportPersistenceGap *_gap;
    FCFeedViewportBookmark *_bookmark;
    unsigned long long _gapExpansionDirection;
    long long _gapExpansionPolicy;
    CDUnknownBlockType _expandGapCompletionHandler;
    unsigned long long _indexOfGroupToInflate;
    FCDeflatedFeedGroup *_groupToInflate;
    FCFeedGroup *_inflatedGroup;
}

@property (nonatomic) unsigned long long indexOfGroupToInflate;
@property (retain, nonatomic) FCDeflatedFeedGroup *groupToInflate;
@property (retain, nonatomic) FCFeedGroup *inflatedGroup;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (copy, nonatomic) FCFeedViewportPersistenceGap *gap;
@property (copy, nonatomic) FCFeedViewportBookmark *bookmark;
@property (nonatomic) unsigned long long gapExpansionDirection;
@property (nonatomic) long long gapExpansionPolicy;
@property (nonatomic) _Bool cachedOnly;
@property (copy, nonatomic) CDUnknownBlockType expandGapCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;

@end
