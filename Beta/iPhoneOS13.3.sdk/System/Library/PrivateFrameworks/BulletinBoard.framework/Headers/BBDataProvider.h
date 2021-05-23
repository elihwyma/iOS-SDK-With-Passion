/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

#import <BulletinBoard/Swift-Protocol.h>

@class BBDataProviderIdentity, NSString;

@interface BBDataProvider : NSObject <Swift>

{
    BBDataProviderIdentity *_identity;
}

@property (retain) BBDataProviderIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (_Bool)initialized;
- (id)sortDescriptors;
- (id)sectionIdentifier;
- (id)sortKey;
- (id)sectionDisplayName;
- (void)dataProviderDidLoad;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 sizeConstraints:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (_Bool)syncsBulletinDismissal;
- (_Bool)canClearBulletinsByDate;
- (_Bool)canClearAllBulletins;
- (id)sectionParameters;
- (id)universalSectionIdentifier;
- (id)parentSectionIdentifier;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)defaultSectionInfo;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)sectionIcon;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)defaultSubsectionInfos;
- (id)displayNameForSubsectionID:(id)arg1;
- (_Bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)startWatchdog;
- (void)reloadIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canPerformMigration;

@end
