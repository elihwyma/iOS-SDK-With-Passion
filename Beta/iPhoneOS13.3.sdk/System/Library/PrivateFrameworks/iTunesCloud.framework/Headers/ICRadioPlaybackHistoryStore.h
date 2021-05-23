/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICUserIdentityStore, NSOperationQueue, NSURL;

@protocol OS_dispatch_queue;

@interface ICRadioPlaybackHistoryStore : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURL *_containerURL;
    NSOperationQueue *_identityResolutionQueue;
    ICUserIdentityStore *_identityStore;
}

@property (copy, nonatomic, readonly) NSURL *containerDirectoryURL;
@property (nonatomic, readonly) ICUserIdentityStore *userIdentityStore;

+ (id)_defaultContainerURL;

- (id)init;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithContainerDirectoryURL:(id)arg1;
- (id)initWithContainerDirectoryURL:(id)arg1 identityStore:(id)arg2;
- (id)_playbackHistoryOfClass:(Class)arg1 forStationWithIdentifier:(id)arg2 identityKey:(id)arg3 error:(id *)arg4;
- (void)_getCacheKeyForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_fileURLForStationWithIdentifier:(id)arg1 identityKey:(id)arg2;
- (void)updateHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithIdentityStore:(id)arg1;
- (void)getHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
