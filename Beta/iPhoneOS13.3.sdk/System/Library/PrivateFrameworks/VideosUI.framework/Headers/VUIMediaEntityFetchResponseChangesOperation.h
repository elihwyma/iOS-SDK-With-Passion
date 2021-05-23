/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityFetchResponseChangesOperation : VUIAsynchronousOperation

{
    NSArray *_fetchResponseChanges;
    NSError *_error;
    NSArray *_latestFetchResponses;
    NSArray *_currentFetchResponses;
}

@property (copy, nonatomic) NSArray *fetchResponseChanges;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSArray *latestFetchResponses;
@property (copy, nonatomic) NSArray *currentFetchResponses;

+ (id)_changeSetFromCurrentMediaEntities:(id)arg1 toLatestMediaEntities:(id)arg2;

- (id)init;
- (void)executionDidBegin;
- (void)_preloadMediaEntityMetadata;
- (id)_mediaEntitiesChangeSetWithLatestFetchResponse:(id)arg1 currentFetchResponse:(id)arg2;
- (id)_groupingChangeSetWithLatestFetchResponse:(id)arg1 currentFetchResponse:(id)arg2;
- (void)_preloadMetadataForFetchResponse:(id)arg1;
- (id)_groupingChangeSetWithCurrentGrouping:(id)arg1 latestGrouping:(id)arg2;
- (id)initWithLatestFetchResponses:(id)arg1 currentFetchResponses:(id)arg2;

@end
