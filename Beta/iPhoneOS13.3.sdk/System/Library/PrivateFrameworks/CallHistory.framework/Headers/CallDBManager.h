/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class DBManager;

@interface CallDBManager : NSObject

{
    _Bool _deviceUnlocked;
    unsigned char _dataStoreType;
    unsigned char _notifyDataStoreChangeReason;
    DBManager *_dbManager;
    id _deviceUnlockNotificationRef;
}

@property (retain) id deviceUnlockNotificationRef;
@property (retain, nonatomic) DBManager *dbManager;
@property _Bool deviceUnlocked;
@property unsigned char dataStoreType;
@property unsigned char notifyDataStoreChangeReason;

+ (id)modelURL;
+ (id)getDBLocationIsSandboxed:(_Bool)arg1 isTemporary:(_Bool)arg2 error:(unsigned char *)arg3;
+ (id)dataStoreName;

- (id)init;
- (void)dealloc;
- (id)createManagedObjectContext;
- (void)registerForNotifications;
- (id)tempDBLocation:(unsigned char *)arg1;
- (_Bool)notifyDataStoreChanged;
- (void)handlePermanentCreated;
- (void)moveCallsFromTempDatabase;
- (void)createDataStore;
- (id)permDBLocation:(unsigned char *)arg1;
- (void)handleTemporaryCreated;
- (_Bool)shouldCreatePermanent;
- (void)createPermanent;
- (_Bool)shouldCreateTemporary;
- (void)createTemporary;
- (void)reFetchState;

@end
