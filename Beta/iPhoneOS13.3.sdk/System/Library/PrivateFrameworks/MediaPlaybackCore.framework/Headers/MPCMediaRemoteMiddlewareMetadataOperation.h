/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCFuture, MPCMediaRemoteMiddleware, MPRequest, MPSectionedCollection, NSArray, NSError, NSIndexPath, NSMapTable, NSString;

@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration;

@interface MPCMediaRemoteMiddlewareMetadataOperation : MPAsyncOperation

{
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    struct NSMapTable *_inputOperations;
    MPCMediaRemoteMiddleware *_middleware;
    MPRequest<MPCMediaRemoteMiddlewareMetadataOperationConfiguration> *_request;
    MPCFuture *_playQueueIdentifiersFuture;
    MPCFuture *_playingIdentifierFuture;
    MPCFuture *_queueIdentifierFuture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MPSectionedCollection *sourceContentItems;
@property (nonatomic, readonly) MPSectionedCollection *modelObjects;
@property (copy, nonatomic, readonly) NSIndexPath *playingIndexPath;
@property (retain, nonatomic) MPCMediaRemoteMiddleware *middleware;
@property (retain, nonatomic) MPRequest<MPCMediaRemoteMiddlewareMetadataOperationConfiguration> *request;
@property (retain, nonatomic) MPCFuture *playQueueIdentifiersFuture;
@property (retain, nonatomic) MPCFuture *playingIdentifierFuture;
@property (retain, nonatomic) MPCFuture *queueIdentifierFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, readonly) NSArray *inputProtocols;
@property (nonatomic, readonly) NSArray *outputProtocols;
@property (retain, nonatomic) NSMapTable *inputOperations;

- (void)execute;
- (id)timeoutDescription;
- (struct _MSVSignedRange)rangeFromTracklistRange:(CDStruct_339ad95e)arg1;
- (void)_loadItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_itemGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2;
- (void)_loadPlayingIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (id)_genericObjectPropertySetForContentItem:(id)arg1 preferredRelationships:(id)arg2 propertySet:(id)arg3;
- (id)initWithMiddleware:(id)arg1 request:(id)arg2;

@end
