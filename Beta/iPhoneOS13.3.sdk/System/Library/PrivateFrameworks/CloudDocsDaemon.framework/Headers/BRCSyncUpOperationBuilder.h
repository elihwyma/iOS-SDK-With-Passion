/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCSyncUpOperation, BRCUserDefaults, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCSyncUpOperationBuilder : NSObject

{
    NSMutableSet *_fullyChainedParentIDWhitelist;
    NSMutableSet *_halfChainedParentIDWhitelist;
    BRCAccountSession *_session;
    BRCSyncUpOperation *_op;
    BRCUserDefaults *_defaults;
}

@property (retain, nonatomic) BRCSyncUpOperation *op;
@property (retain, nonatomic) BRCAccountSession *session;
@property (retain, nonatomic) BRCUserDefaults *defaults;

- (id)init;
- (float)addItem:(id)arg1;
- (float)fakeSyncForItem:(id)arg1 inZone:(id)arg2;
- (float)addDeletionOfRecordID:(id)arg1 ckInfo:(id)arg2;
- (float)addEditOfDocument:(id)arg1;
- (unsigned char)shouldPCSChainStatusForItem:(id)arg1;
- (void)handleEditOfSharedItem:(id)arg1;
- (void)handleDeletionOfSharedItem:(id)arg1;
- (float)addDeletionOfItem:(id)arg1;
- (void)prepareAppLibraryRootSyncUpForItem:(id)arg1;
- (_Bool)checkIfSyncAllowedInSharedZoneForItem:(id)arg1;
- (float)addDeletionOfSharedTopLevelItem:(id)arg1;
- (float)addDeletionOfFinderBookmark:(id)arg1;
- (float)addDeletionOfDocument:(id)arg1;
- (float)addDeletionOfDirectory:(id)arg1;
- (float)addEditOfSharedTopLevelItem:(id)arg1;
- (float)addEditOfFinderBookmark:(id)arg1;
- (float)addEditOfSymlink:(id)arg1;
- (float)addEditOfDirectory:(id)arg1;

@end
