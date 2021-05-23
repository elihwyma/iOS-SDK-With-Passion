/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSCupidStateMachine.h>

@class MSMediaStreamDaemon, MSObjectQueue, MSPublishStreamsProtocol, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@protocol MSPublishStorageProtocol, MSPublisherDelegate;

@interface MSPublisher : MSCupidStateMachine

{
    id <MSPublisherDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
    int _state;
    MSObjectQueue *_uploadQueue;
    MSObjectQueue *_derivativesQueue;
    MSObjectQueue *_quarantinedQueue;
    NSArray *_pendingDerivativesQueue;
    NSMutableArray *_requestAuthQueue;
    unsigned long long _sendingQueueCount;
    NSMutableArray *_sendingQueue;
    NSMutableDictionary *_fileHashToAssetMap;
    MSPublishStreamsProtocol *_protocol;
    id <MSPublishStorageProtocol> _storageProtocol;
    NSURL *_storageProtocolURL;
    NSMutableArray *_tempFiles;
    NSMutableDictionary *_maxSizeByUTI;
    long long _publishTargetByteCount;
    int _publishBatchSize;
    int _maxErrorCount;
}

@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (retain, nonatomic) NSURL *storageProtocolURL;
@property (nonatomic) long long publishTargetByteCount;
@property (nonatomic) int publishBatchSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <MSPublisherDelegate> delegate;

+ (void)forgetPersonID:(id)arg1;
+ (id)nextActivityDate;
+ (_Bool)isInRetryState;
+ (void)stopAllActivities;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)publisherForPersonID:(id)arg1;
+ (id)existingPublisherForPersonID:(id)arg1;
+ (id)_clearInstantiatedPublishersByPersonID;
+ (id)personIDsWithOutstandingActivities;

- (void)dealloc;
- (void)stop;
- (void)publish;
- (void)abort;
- (void)deactivate;
- (int)_stop;
- (void)_abort;
- (void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
- (int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
- (void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;
- (void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
- (void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;
- (void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;
- (void)reenqueueQuarantinedAssetCollections;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)_updateMasterManifest;
- (_Bool)enqueueAssetCollections:(id)arg1 outError:(id *)arg2;
- (_Bool)dequeueAssetCollectionWithGUIDs:(id)arg1 outError:(id *)arg2;
- (void)computeHashForAsset:(id)arg1;
- (void)_refreshServerSideConfiguredParameters;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (void)_registerAsset:(id)arg1;
- (void)_registerAllAssetsForWrapper:(id)arg1;
- (void)_quarantineOrDiscardWrappers:(id)arg1 withError:(id)arg2;
- (_Bool)_verifyAssetFile:(id)arg1;
- (id)_collectionWithNoDerivatives:(id)arg1;
- (id)_checkAssetCollectionFiles:(id)arg1;
- (id)_checkObjectWrappers:(id)arg1;
- (_Bool)_isAllowedToUpload;
- (void)_requestDerivatives;
- (void)_addAssetToFileHashMap:(id)arg1;
- (void)_removeAssetFromFileHashMap:(id)arg1;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1;
- (void)_didFinishUsingAssetCollections:(id)arg1;
- (void)_sendMetadataToStreams;
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1;
- (void)_sendFilesToMMCS;
- (void)_categorizeError:(id)arg1 setOutIsIgnorable:(_Bool *)arg2 setOutIsCounted:(_Bool *)arg3 setOutIsFatal:(_Bool *)arg4 setOutNeedsBackoff:(_Bool *)arg5 setOutIsTemporary:(_Bool *)arg6 setOutIsTokenAuth:(_Bool *)arg7 setOutIsAuthError:(_Bool *)arg8;
- (void)_sendUploadComplete;
- (id)_abortedError;
- (void)_forget;
- (_Bool)_isInRetryState;

@end
