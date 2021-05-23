/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class CADDatabaseInitializationOptions, CADOperationProxy, ClientIdentity, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection;

@protocol CADAccountAccessHandler, ClientConnectionDelegate, OS_dispatch_queue;

@interface ClientConnection : NSObject

{
    _Bool _allowedEntityTypesValid;
    long long _eventAccess;
    long long _reminderAccess;
    struct CalDatabase *_database;
    id <CADAccountAccessHandler> _accountAccessHandler;
    id <CADAccountAccessHandler> _strictAccountAccessHandler;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSOperationQueue *_operations;
    NSMutableDictionary *_insertedObjects;
    NSMutableSet *_canceledRequests;
    NSObject<OS_dispatch_queue> *_canceledRequestsLock;
    _Bool _initializationOptionsSet;
    CADOperationProxy *_cadOperationProxy;
    id <ClientConnectionDelegate> _delegate;
    ClientIdentity *_identity;
    NSXPCConnection *_xpcConnection;
    CADDatabaseInitializationOptions *_databaseInitializationOptions;
}

@property (nonatomic, readonly) id <CADAccountAccessHandler> accountAccessHandler;
@property (weak, nonatomic) id <ClientConnectionDelegate> delegate;
@property (nonatomic) struct CalDatabase *database;
@property (nonatomic, readonly) ClientIdentity *identity;
@property (nonatomic, readonly) CADOperationProxy *cadOperationProxy;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) NSString *changeTrackingID;
@property (retain, nonatomic) CADDatabaseInitializationOptions *databaseInitializationOptions;
@property (readonly) _Bool initializationOptionsSet;

- (void)dealloc;
- (void *)objectForKey:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)operations;
- (id)initWithXPCConnection:(id)arg1;
- (id)insertedObjects;
- (void)closeDatabase;
- (_Bool)eventAccessGranted;
- (_Bool)reminderAccessGranted;
- (_Bool)hasTCCAccessToEntityWithObjectID:(id)arg1;
- (void)insertObject:(void *)arg1 key:(id)arg2;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (_Bool)isCalendarRestricted:(void *)arg1 forAction:(unsigned long long)arg2;
- (void)clearInsertedObjects;
- (void)clearCachedAuthorizationStatus;
- (_Bool)isCalendarItemRestricted:(void *)arg1 forAction:(unsigned long long)arg2;
- (_Bool)isObjectWithObjectIDAJunkEvent:(id)arg1;
- (id)_createManagedConfigAccountAccessHandlerWithValidator:(id)arg1;
- (void)_initAccountAccessHandler;
- (id)strictAccountAccessHandler;
- (void)_loadAccessPermissionsIfNeeded;
- (_Bool)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(id)arg1;
- (_Bool)isStoreRestricted:(void *)arg1 forAction:(unsigned long long)arg2 strict:(_Bool)arg3;
- (_Bool)isStoreManaged:(void *)arg1;
- (_Bool)isCalendarManaged:(void *)arg1;
- (void)handleDatabaseChanged;
- (void)dumpState;
- (_Bool)isStoreRestricted:(void *)arg1 forAction:(unsigned long long)arg2;
- (_Bool)isNotificationRestricted:(void *)arg1 forAction:(unsigned long long)arg2;
- (_Bool)isCalendarItemManaged:(void *)arg1;

@end
