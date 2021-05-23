/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class BRCItemID, BRCServerZone, CKRecord, CKShare, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation

{
    BRCServerZone *_serverZone;
    CKShare *_share;
    BRCItemID *_itemID;
    CKRecord *_sharingIdentityPreparedRecord;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (oneway void)invalidate;
- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterGettingPublicSharingKeyForRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)arg1 wantRoutingKey:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3;
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1 recordsToLearnCKInfo:(id)arg2;
- (void)performAfterPreparingSharingIdentityIfNecessary:(CDUnknownBlockType)arg1;

@end
