/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSCupidStateMachine.h>

@class MSDeleteStreamsProtocol, MSMediaStreamDaemon, MSObjectQueue, NSMutableArray, NSString;

@protocol MSDeleterDelegate;

@interface MSDeleter : MSCupidStateMachine

{
    MSDeleteStreamsProtocol *_protocol;
    int _state;
    MSObjectQueue *_deleteQueue;
    NSMutableArray *_requestedDeleteWrappers;
    int _batchSize;
    int _maxErrorCount;
    id <MSDeleterDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
}

@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (nonatomic) int batchSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <MSDeleterDelegate> delegate;

+ (void)forgetPersonID:(id)arg1;
+ (id)nextActivityDate;
+ (_Bool)isInRetryState;
+ (void)stopAllActivities;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)personIDsWithOutstandingActivities;
+ (void)abortAllActivities;
+ (id)deleterForPersonID:(id)arg1;
+ (id)existingDeleterForPersonID:(id)arg1;
+ (id)_clearInstantiatedDeletersByPersonID;

- (void)dealloc;
- (void)stop;
- (void)abort;
- (void)deactivate;
- (void)_stop;
- (void)deleteAssetCollections:(id)arg1;
- (void)_abort;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)_updateMasterManifest;
- (id)_abortedError;
- (void)_forget;
- (_Bool)_isInRetryState;
- (void)deleteProtocol:(id)arg1 didFinishSuccessfulCollections:(id)arg2 failedCollections:(id)arg3 error:(id)arg4;
- (void)deleteProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)performOutstandingActivities;
- (_Bool)_isAllowedToDelete;
- (void)_sendDeleteRequest;

@end
