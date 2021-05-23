/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class BRCClientZone, BRCItemID, CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyShareOperation : _BRCFrameworkOperation

{
    CKRecordID *_shareID;
    CKRecordID *_recordIDNeedingFetch;
    BRCItemID *_rootItemIDToLookup;
    BRCClientZone *_clientZone;
}

@property (retain, nonatomic) BRCItemID *rootItemIDToLookup;
@property (retain, nonatomic) BRCClientZone *clientZone;
@property (retain, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKRecordID *recordIDNeedingFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)initWithItem:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (void)fetchRootURLIfNecessaryAndFinishWithShare:(id)arg1;

@end
