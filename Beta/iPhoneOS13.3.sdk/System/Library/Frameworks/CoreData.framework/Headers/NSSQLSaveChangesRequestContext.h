/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSFaultHandler, NSMutableDictionary, NSSQLModel, NSSQLRowCache, NSSQLSavePlan, NSSaveChangesRequest, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext

{
    NSDictionary *_metadataToWrite;
    NSSQLSavePlan *_savePlan;
    NSFaultHandler *_faultHandler;
    NSSet *_objectIDsInsertUpdatedToPruneDATrigger;
    NSSet *_objectIDsUpdatedToPruneDATrigger;
    NSSet *_objectIDsToPruneTrigger;
    NSMutableDictionary *_originalCachedRows;
    NSMutableDictionary *_updateMasksForHistoryTracking;
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesDirectory;
    NSSQLRowCache *_primaryRowCache;
    NSSQLRowCache *_contextGenerationRowCache;
}

@property (nonatomic, readonly) NSDictionary *metadataToWrite;
@property (nonatomic, readonly) NSSQLSavePlan *savePlan;
@property (nonatomic, readonly) NSSQLModel *model;
@property (nonatomic, readonly) NSSaveChangesRequest *request;
@property (nonatomic, readonly) NSFaultHandler *faultHandler;
@property (nonatomic, readonly) NSMutableDictionary *originalCachedRows;
@property (nonatomic, readonly) NSString *externalDataReferencesDirectory;
@property (nonatomic, readonly) NSString *externalDataLinksDirectory;
@property (nonatomic, readonly) NSString *fileBackedFuturesDirectory;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (_Bool)isWritingRequest;
- (_Bool)executeRequestCore:(id *)arg1;
- (void)executePrologue;
- (id)rowCache;
- (void)executeEpilogue;
- (_Bool)hasChangesForWriting;
- (id)originalRowForObjectID:(id)arg1;
- (void)addDataMask:(id)arg1 forEntityKey:(id)arg2;
- (id)dataMaskForKey:(id)arg1;
- (void)setOriginalRow:(id)arg1 forObjectID:(id)arg2;
- (id)contextRowCache;

@end
