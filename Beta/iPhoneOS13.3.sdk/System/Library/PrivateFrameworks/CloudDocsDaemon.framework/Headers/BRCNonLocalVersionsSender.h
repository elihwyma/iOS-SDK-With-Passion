/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCAppLibrary, BRCItemID, BRCServerZone, BRCStatInfo, BRCXPCClient, CKRecordID, NSString, NSURL;

@protocol BRNonLocalVersionReceiving;

__attribute__((visibility("hidden")))
@interface BRCNonLocalVersionsSender : _BRCOperation

{
    id <BRNonLocalVersionReceiving> _receiver;
    BRCItemID *_itemID;
    BRCStatInfo *_st;
    NSString *_currentEtag;
    NSString *_storagePathPrefix;
    struct NSObject *_storage;
    BRCXPCClient *_client;
    BRCServerZone *_serverZone;
    BRCAppLibrary *_appLibrary;
    CKRecordID *_recordID;
    CDUnknownBlockType _reply;
    _Bool _includeCachedVersions;
    NSURL *_logicalURL;
    NSURL *_physicalURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *logicalURL;
@property (nonatomic, readonly) NSURL *physicalURL;
@property (nonatomic) _Bool includeCachedVersions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)senderWithLookup:(id)arg1 client:(id)arg2 XPCReceiver:(id)arg3 error:(id *)arg4;

- (oneway void)invalidate;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)listNonLocalVersionsWithReply:(CDUnknownBlockType)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithDocument:(id)arg1 serverItem:(id)arg2 relpath:(id)arg3 client:(id)arg4 XPCReceiver:(id)arg5 error:(id *)arg6;
- (id)_fetchThumbnailOperationForVersionRecord:(id)arg1 physicalURL:(id)arg2;
- (id)_depsTrackingOperation;
- (id)_fetchVersionsOperationWithDepsOp:(id)arg1;

@end
