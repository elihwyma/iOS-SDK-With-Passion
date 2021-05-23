/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class CLInUseAssertion, NSBundle, NSCache, NSString, SLRemoteSessionProxy;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, SLTwitterRemoteSessionProtocol;

@interface SLTwitterSession : NSObject

{
    SLRemoteSessionProxy<SLTwitterRemoteSessionProtocol> *_remoteSession;
    NSCache *_profileImageCache;
    NSObject<OS_dispatch_queue> *_remoteSessionQueue;
    NSObject<OS_dispatch_semaphore> *_remoteSessionQueueSemaphore;
    NSBundle *_serviceBundle;
    CLInUseAssertion *_locationInUseAssertion;
    CDUnknownBlockType _connectionResetBlock;
    CDUnknownBlockType _locationInformationChangedBlock;
}

@property (copy, nonatomic) CDUnknownBlockType connectionResetBlock;
@property (copy, nonatomic) CDUnknownBlockType locationInformationChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_remoteInterface;

- (id)init;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)acceptLocationUpdate:(id)arg1;
- (id)_createOrGetRemoteSession;
- (void)fetchSessionInfo:(CDUnknownBlockType)arg1;
- (void)ensureUserRecordStore;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCurrentUrlLimits:(CDUnknownBlockType)arg1;
- (void)fetchCurrentImageLimits:(CDUnknownBlockType)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)fetchGeotagStatus:(CDUnknownBlockType)arg1;
- (void)sendStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPermaLinkFromLastStatusUpdate:(CDUnknownBlockType)arg1;
- (void)beginPotentialLocationUse;
- (void)endPotentialLocationUse;
- (void)showSettingsIfNeeded;
- (id)serviceAccountTypeIdentifier;
- (void)deferExpensiveOperations;
- (void)stopDeferringExpensiveOperations;
- (void)logDidSendStatusWithText:(id)arg1 attachments:(id)arg2 locationAttached:(_Bool)arg3 fromProcessWithPID:(int)arg4;
- (id)cachedProfileImageDataForScreenName:(id)arg1;
- (void)tearDownConnectionToRemoteSession;
- (void)retweetTweetWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendDirectMessage:(id)arg1 toUser:(id)arg2 withScreenName:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
