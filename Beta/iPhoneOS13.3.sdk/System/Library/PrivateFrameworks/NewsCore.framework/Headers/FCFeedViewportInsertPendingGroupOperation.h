/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCFeedDescriptor, FCFeedGroup, FCFeedGroupEmittingContext, FCFeedRefreshSession, NSArray, NSSet;

@protocol FCCoreConfiguration;

@interface FCFeedViewportInsertPendingGroupOperation : FCOperation

{
    FCFeedRefreshSession *_resultRefreshSession;
    NSArray *_resultUpdatedRefreshSessions;
    FCFeedGroup *_resultInsertedGroup;
    NSSet *_resultDeletedElementIDs;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedDescriptor *_feedDescriptor;
    FCFeedRefreshSession *_refreshSession;
    NSArray *_feedGroupEmitters;
    FCFeedGroupEmittingContext *_groupEmittingContext;
    NSArray *_internalElements;
    CDUnknownBlockType _insertGroupCompletionHandler;
}

@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (retain, nonatomic) FCFeedRefreshSession *refreshSession;
@property (retain, nonatomic) NSArray *feedGroupEmitters;
@property (retain, nonatomic) FCFeedGroupEmittingContext *groupEmittingContext;
@property (retain, nonatomic) NSArray *internalElements;
@property (copy, nonatomic) CDUnknownBlockType insertGroupCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_nextGroupToInsert:(id *)arg1;
- (void)_finishWithInsertedGroup:(id)arg1 backedByPendingGroup:(id)arg2 forEmitter:(id)arg3;

@end
