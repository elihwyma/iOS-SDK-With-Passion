/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class BRCALRowID, BRCItemID, BRCPrivateClientZone, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingProcessFolderSubitemsOperation : _BRCFrameworkOperation

{
    unsigned long long _rowID;
    unsigned long long _batchSize;
    unsigned long long _failedSubitemsLeft;
    unsigned long long _processType;
    NSMutableArray *_sharedClientSubitems;
    NSMutableArray *_aliasItemsToDelete;
    NSMutableArray *_shareIDsToDelete;
    BRCPrivateClientZone *_rootClientZone;
    BRCItemID *_rootItemID;
    BRCALRowID *_appLibraryRowID;
    _Bool _isFSRoot;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (void)removeSharedSubitemsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_completeAfterProcessingClientTruthIfNecessaryWithError:(id)arg1;
- (_Bool)_completeAfterProcessingServerTruthIfNecessaryWithError:(id)arg1;
- (void)processServerTruthWithCompletion:(CDUnknownBlockType)arg1;
- (void)processClientTruthWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithItem:(id)arg1 processType:(unsigned long long)arg2 maxSubitemsToFail:(unsigned long long)arg3;
- (id)computeURLForItemID:(id)arg1 rootURL:(id)arg2;

@end
