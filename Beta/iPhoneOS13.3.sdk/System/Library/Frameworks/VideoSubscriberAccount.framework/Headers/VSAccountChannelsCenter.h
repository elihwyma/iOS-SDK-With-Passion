/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSUndoManager, VSAccountStore;

@protocol OS_dispatch_queue;

@interface VSAccountChannelsCenter : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSURL *_fileURL;
    VSAccountStore *_accountStore;
    NSString *_fileName;
    NSURL *_directoryURL;
    CDUnknownBlockType _identityProviderFetchOperationBlock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) VSAccountStore *accountStore;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSURL *directoryURL;
@property (copy, nonatomic) CDUnknownBlockType identityProviderFetchOperationBlock;
@property (retain, nonatomic) NSUndoManager *undoManager;

+ (id)sharedCenter;
+ (void)_startOperationAndWaitForCompletion:(id)arg1;
+ (id)_accountChannelsWithProviderID:(id)arg1;
+ (id)_defaultDirectoryURL;
+ (id)_defaultFileName;

- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (void)fetchAccountChannelsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_saveAccountChannels:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_savedAccountChannels;
- (void)_enqueueSaveAccountChannelsAndWait:(id)arg1;
- (void)_enqueueRemoveSavedAccountChannelsAndWait;
- (id)_removeSavedAccountChannels;
- (void)_snapshotPreviousChannels;
- (id)_saveAccountChannels:(id)arg1;
- (id)_storeIdentityProviderForAccount:(id)arg1;
- (id)_savedAccountChannelsForIdentityProviderID:(id)arg1 storeIdentityProvider:(id)arg2;
- (void)_removeSavedAccountChannelsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
