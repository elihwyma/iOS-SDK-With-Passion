/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFilePresenterProxy, NSString;

@protocol NSFilePresenter, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFilePresenterXPCMessenger : NSObject

{
    id <NSFilePresenter> _filePresenter;
    NSObject<OS_dispatch_queue> *_queue;
    NSFilePresenterProxy *_filePresenterProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)observeChangeOfUbiquityAttributes:(id)arg1;
- (id)initWithFilePresenter:(id)arg1 queue:(id)arg2;
- (void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 purposeID:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_makePresenter:(id)arg1 validateRelinquishmentToSubitemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_readRelinquishment;
- (id)_writeRelinquishment;
- (void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3;
- (void)_makePresenterObserveDisconnection:(id)arg1;
- (void)_makePresenterObserveReconnection:(id)arg1;
- (void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 observeSharingChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 observeChangeOfUbiquityAttributes:(id)arg2;
- (void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5;
- (void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2;
- (void)_makePresenter:(id)arg1 setProviderPurposeIdentifier:(id)arg2;
- (oneway void)setProviderPurposeIdentifier:(id)arg1;
- (void)_makePresenter:(id)arg1 reportUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 purposeID:(id)arg3 ifNecessaryUsingSelector:(SEL)arg4 recordingRelinquishment:(id)arg5 continuer:(CDUnknownBlockType)arg6;
- (void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_makePresenter:(id)arg1 validateRemoteDeletionRecordingRelinquishment:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (oneway void)reacquireFromReadingClaimForID:(id)arg1;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)observeChangeWithSubitemURL:(id)arg1;
- (oneway void)observeMoveToURL:(id)arg1 withSubitemURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (oneway void)observeDisconnection;
- (oneway void)observeReconnection;
- (oneway void)observeUbiquityChangeWithSubitemURL:(id)arg1;
- (oneway void)observeSharingChangeWithSubitemURL:(id)arg1;
- (oneway void)observeVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4;
- (oneway void)observePresenterChange:(_Bool)arg1 forSubitemAtURL:(id)arg2;
- (oneway void)updateLastEventID:(unsigned long long)arg1;
- (oneway void)logSuspensionWarning;
- (id)initWithFilePresenterProxy:(id)arg1;

@end
