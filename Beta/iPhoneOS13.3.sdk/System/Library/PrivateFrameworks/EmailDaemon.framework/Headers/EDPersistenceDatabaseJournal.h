/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseJournalManager, NSString;

@interface EDPersistenceDatabaseJournal : NSObject

{
    struct os_unfair_lock_s _referenceCountLock;
    unsigned long long _referenceCount;
    unsigned long long _number;
    EDPersistenceDatabaseJournalManager *_journalManager;
}

@property (nonatomic, readonly) EDPersistenceDatabaseJournalManager *journalManager;
@property (readonly) unsigned long long referenceCount;
@property (copy, nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) unsigned long long number;

- (id)description;
- (void)checkIn;
- (void)checkOut;
- (id)initWithJournalManager:(id)arg1 number:(unsigned long long)arg2;

@end
