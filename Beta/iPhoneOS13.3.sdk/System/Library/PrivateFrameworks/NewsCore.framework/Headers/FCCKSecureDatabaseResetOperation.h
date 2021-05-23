/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKSecureDatabaseResetOperation : FCOperation

{
    _Bool _deleteZones;
    _Bool _restoreSecureSentinel;
    _Bool _restoreZoneContents;
    FCCKPrivateDatabase *_database;
    CDUnknownBlockType _resetCompletionHandler;
}

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (nonatomic) _Bool deleteZones;
@property (nonatomic) _Bool restoreSecureSentinel;
@property (nonatomic) _Bool restoreZoneContents;
@property (copy, nonatomic) CDUnknownBlockType resetCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_deleteZones;
- (id)_recreateZones;
- (id)_restoreSecureSentinel;
- (id)_restoreZoneContents;
- (id)_rawZoneIDsToDelete;
- (id)_rawZonesToRecreate;
- (id)_rawRecordsToSave;

@end
