/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMClockElementList;

@protocol REMReplicaManagerClient;

@interface REMReplicaEntry : NSObject

{
    _Bool _inUse;
    unsigned int _replicaUUIDIndex;
    REMClockElementList *_clockElementList;
    id <REMReplicaManagerClient> _client;
}

@property (nonatomic) unsigned int replicaUUIDIndex;
@property (retain, nonatomic) REMClockElementList *clockElementList;
@property (nonatomic) _Bool inUse;
@property (nonatomic) id <REMReplicaManagerClient> client;

- (id)description;
- (void)encodeIntoEntryArchive:(struct ReplicaEntry *)arg1;
- (id)initWithEntryArchive:(const struct ReplicaEntry *)arg1;
- (id)initWithReplicaUUIDIndex:(unsigned int)arg1 clockElementList:(id)arg2 inUse:(_Bool)arg3 forClient:(id)arg4;
- (id)persistenceDescription;
- (_Bool)hasEqualPersistedPropertiesAs:(id)arg1;

@end
