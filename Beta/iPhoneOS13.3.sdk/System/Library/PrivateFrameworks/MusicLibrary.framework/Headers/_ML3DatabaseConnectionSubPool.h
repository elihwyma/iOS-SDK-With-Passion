/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _ML3DatabaseConnectionSubPool : NSObject

{
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    NSObject<OS_dispatch_queue> *_checkinQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_waitingSemaphore;
    NSMutableSet *_availableConnections;
    NSMutableSet *_busyConnections;
    int _connectionsProfilingLevel;
    int _willDeleteDatabaseNotifyToken;
    int _homeSharingCachesClearedNotifyToken;
    _Bool _useReadOnlyConnections;
    _Bool _useDistantConnections;
    NSString *_databasePath;
    unsigned long long _maxConcurrentConnections;
    unsigned long long _connectionsJournalingMode;
}

@property (nonatomic, readonly) NSString *databasePath;
@property (nonatomic, readonly) unsigned long long maxConcurrentConnections;
@property (nonatomic) _Bool useReadOnlyConnections;
@property (nonatomic) _Bool useDistantConnections;
@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic) int connectionsProfilingLevel;

- (id)init;
- (void)dealloc;
- (void)checkInConnection:(id)arg1;
- (id)initWithDatabasePath:(id)arg1 maxConcurrentConnections:(unsigned long long)arg2;
- (void)closeConnectionsAndWaitForBusyConnections:(_Bool)arg1;
- (id)checkoutConnection:(_Bool *)arg1;
- (void)handleDiagnostic:(id)arg1;
- (void)_handleDatabaseDeletion;
- (void)checkInConnection:(id)arg1 returnToPool:(_Bool)arg2;

@end
