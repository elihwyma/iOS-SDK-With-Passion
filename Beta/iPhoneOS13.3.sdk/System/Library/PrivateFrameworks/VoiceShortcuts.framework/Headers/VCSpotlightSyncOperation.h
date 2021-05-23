/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class CSSearchableIndex, NSDictionary, NSSet;

@protocol OS_dispatch_queue, OS_os_transaction, VCSpotlightSyncOperationDelegate;

@interface VCSpotlightSyncOperation : NSObject

{
    _Bool _fullResync;
    id <VCSpotlightSyncOperationDelegate> _delegate;
    NSDictionary *_searchableItemRegistry;
    NSSet *_identifiersToRemove;
    NSDictionary *_keyedReferences;
    NSObject<OS_dispatch_queue> *_queue;
    CSSearchableIndex *_index;
    NSObject<OS_os_transaction> *_transaction;
}

@property (nonatomic, readonly) NSDictionary *searchableItemRegistry;
@property (nonatomic, readonly) NSSet *identifiersToRemove;
@property (nonatomic, readonly) NSDictionary *keyedReferences;
@property (nonatomic, readonly) _Bool fullResync;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (weak, nonatomic) id <VCSpotlightSyncOperationDelegate> delegate;

+ (id)spotlightDiffFileURL;
+ (id)getSpotlightLocalState;
+ (void)_fillIdentifiersToRemove:(id *)arg1 searchableItemRegistry:(id *)arg2 withMaximumUpdatedItems:(long long)arg3 references:(id)arg4 localState:(id)arg5;

- (void)start;
- (id)initWithReferences:(id)arg1 clientState:(unsigned long long)arg2 spotlightIndex:(id)arg3 forceFullResync:(_Bool)arg4;
- (void)indexSearchableItems;
- (void)saveLocalState;
- (void)clearLocalStateAndExit;
- (void)deleteSpotlightFileAndCleanup;
- (void)cleanupAndExitWithRequestToRelaunch:(_Bool)arg1;

@end
