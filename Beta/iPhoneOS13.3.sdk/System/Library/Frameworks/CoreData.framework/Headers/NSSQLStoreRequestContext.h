/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSError, NSException, NSManagedObjectContext, NSNumber, NSPersistentStoreRequest, NSQueryGenerationToken, NSSQLCore, NSSQLRowCache, NSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface NSSQLStoreRequestContext : NSObject

{
    NSSQLCore *_sqlCore;
    NSPersistentStoreRequest *_persistentStoreRequest;
    NSSQLiteConnection *_connection;
    NSManagedObjectContext *_context;
    NSError *_error;
    NSException *_exception;
    id _result;
    NSQueryGenerationToken *_queryGeneration;
    NSNumber *_transactionID;
    _Bool _useColoredLogging;
    _Bool _useConcurrentFetching;
    _Bool _hasHistoryTracking;
    _Bool _storeIsInMemory;
}

@property (nonatomic, readonly) NSSQLCore *sqlCore;
@property (retain, nonatomic) NSSQLiteConnection *connection;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, readonly) _Bool storeIsInMemory;
@property (nonatomic, readonly) NSNumber *transactionID;
@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (retain, nonatomic) NSError *localError;
@property (nonatomic, readonly) int debugLogLevel;
@property (nonatomic, readonly) _Bool useColoredLogging;
@property (nonatomic, readonly) _Bool useConcurrentFetching;
@property (retain, nonatomic) id result;
@property (retain, nonatomic) id exception;
@property (nonatomic, readonly) NSSQLRowCache *rowCache;
@property (nonatomic, readonly) _Bool isWritingRequest;
@property (retain, nonatomic) NSQueryGenerationToken *queryGenerationToken;
@property (nonatomic, readonly) _Bool shouldRegisterQueryGeneration;

- (void)dealloc;
- (id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (_Bool)executeRequestCore:(id *)arg1;
- (void)executePrologue;
- (_Bool)hasHistoryTracking;
- (id)newStatementWithSQLString:(id)arg1;
- (_Bool)forConflictAnalysis;
- (id)createNestedObjectFaultContextForObjectWithID:(id)arg1;
- (id)notificationSourceObject;
- (void)setTransactionID:(id)arg1;
- (_Bool)executeRequestUsingConnection:(id)arg1;
- (void)executeEpilogue;

@end
