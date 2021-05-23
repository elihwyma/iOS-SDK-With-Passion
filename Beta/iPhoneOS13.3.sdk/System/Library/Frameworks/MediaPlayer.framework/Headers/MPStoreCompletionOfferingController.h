/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface MPStoreCompletionOfferingController : NSObject

{
    NSCache *_offeringCache;
    NSMutableDictionary *_lookupItemsByStoreLookupID;
    NSMutableDictionary *_lookupItemsByTokenID;
    unsigned long long _nextTokenID;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_getIsCMCDisabled:(_Bool *)arg1 disabledReason:(id *)arg2;
+ (_Bool)_isCmcEnabled;
+ (id)storeOfferingController;
+ (void)setWantsArtwork:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_storeAccountsDidChangeNotification:(id)arg1;
- (id)_sanitizedQuery:(id)arg1;
- (id)completionOfferingForAlbumItemsQuery:(id)arg1;
- (void)cancelCompletionOfferingLookup:(unsigned long long)arg1;
- (unsigned long long)startCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)_dumpCache;
- (id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)arg1 requestAlreadyIssued:(_Bool *)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)_onQueueRemoveLookupItem:(id)arg1;
- (void)_onQueueRemoveLookupItemsForStoreLookupID:(id)arg1;
- (void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned long long)arg1;
- (void)_onQueuePostLookupCompletedForLookupItem:(id)arg1 offering:(id)arg2 error:(id)arg3;
- (void)_lookupCompletedWithResponse:(id)arg1 lookupItem:(id)arg2 error:(id)arg3;
- (id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)arg1;
- (void)_onQueueSetCachedCompletionOffering:(id)arg1 forStoreLookupID:(id)arg2;
- (void)_onQueueClearCache;

@end
