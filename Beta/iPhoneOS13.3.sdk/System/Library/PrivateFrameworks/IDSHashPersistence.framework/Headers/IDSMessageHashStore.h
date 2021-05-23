/*
 Image: /System/Library/PrivateFrameworks/IDSHashPersistence.framework/IDSHashPersistence
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSMessageHashStore : NSObject

{
    unsigned long long _initialProcessTime;
    unsigned long long _initialServerTime;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_source> *_databaseCloseTimer;
    double _databaseLastUpdateTime;
    NSMutableArray *_recentlySeenHashes;
}

@property (nonatomic) unsigned long long initialProcessTime;
@property (nonatomic) unsigned long long initialServerTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *databaseCloseTimer;
@property (nonatomic) double databaseLastUpdateTime;
@property (retain, nonatomic) NSMutableArray *recentlySeenHashes;

+ (id)sharedInstance;

- (id)init;
- (void)closeDatabase;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (void)_performInitialHousekeeping;
- (void)_startCleanupTimer;
- (unsigned long long)_currentLocalTime;
- (void)_runCleanup;
- (_Bool)containsMessageHash:(id)arg1;
- (void)addMessageHash:(id)arg1;
- (void)updateCreationDateForHash:(id)arg1;

@end
