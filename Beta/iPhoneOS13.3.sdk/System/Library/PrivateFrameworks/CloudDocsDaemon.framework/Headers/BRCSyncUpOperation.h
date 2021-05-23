/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCLocalItem, BRCServerZone, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCSyncUpOperation : _BRCOperation

{
    unsigned long long _requestID;
    float _cost;
    NSMutableArray *_recordsToSave;
    NSMutableArray *_packagesInFlight;
    NSMutableArray *_createdAppLibraryNames;
    NSMutableOrderedSet *_deletedRecordIDs;
    NSMutableArray *_iworkUnsharedShareIDs;
    NSMutableDictionary *_renamedShareIDsToNames;
    NSMutableArray *_recordsNeedingNewSharingProtectionInfo;
    NSMutableArray *_recordsNeedingUpdatedSharingProtectionInfo;
    NSMutableDictionary *_recordIDsToDeleteToEtags;
    NSMutableDictionary *_pluginFieldsForRecordDeletesByID;
    BRCLocalItem *_itemNeedingPCSChaining;
    NSMutableDictionary *_conflictLosersToResolveByRecordID;
    NSString *_stageID;
    CDUnknownBlockType _syncUpCompletionBlock;
    BRCServerZone *_serverZone;
}

@property (retain, nonatomic) BRCServerZone *serverZone;
@property (retain, nonatomic) NSMutableArray *packagesInFlight;
@property (retain, nonatomic) NSMutableArray *recordsToSave;
@property (retain, nonatomic) NSMutableOrderedSet *deletedRecordIDs;
@property (retain, nonatomic) NSMutableArray *iworkUnsharedShareIDs;
@property (retain, nonatomic) NSMutableDictionary *renamedShareIDsToNames;
@property (retain, nonatomic) NSMutableArray *recordsNeedingNewSharingProtectionInfo;
@property (retain, nonatomic) NSMutableArray *recordsNeedingUpdatedSharingProtectionInfo;
@property (retain, nonatomic) BRCLocalItem *itemNeedingPCSChaining;
@property (retain, nonatomic) NSMutableDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSMutableDictionary *pluginFieldsForRecordDeletesByID;
@property (retain, nonatomic) NSMutableDictionary *conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSString *stageID;
@property (nonatomic, readonly) float cost;
@property (nonatomic, readonly) NSMutableArray *createdAppLibraryNames;
@property (copy, nonatomic) CDUnknownBlockType syncUpCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)syncUpOperationForZone:(id)arg1 maxCost:(float)arg2 retryAfter:(unsigned long long *)arg3;

- (void)dealloc;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithZone:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (_Bool)prepareWithMaxCost:(float)arg1 retryAfter:(unsigned long long *)arg2;
- (_Bool)_performPCSChainOperationIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performModifyRecordsOrPCSChainOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)performShareUpdate:(CDUnknownBlockType)arg1;
- (void)_scheduleShareUpdateAndModifyRecordsAndZoneCreationOperation;
- (void)_performShareUpdateAndModifyRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_recordIsIWorkShareable:(id)arg1;
- (void)_setSharingFieldsOnContentRecord:(id)arg1 withProtectionData:(id)arg2 baseToken:(id)arg3 routingKey:(id)arg4 forceOverwrite:(_Bool)arg5;
- (void)_performUpdateSharingProtectionDataIfNecessary:(CDUnknownBlockType)arg1;

@end
