/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSyncAnchorMap, HDSyncSession, NSError;

@interface HDDaemonSyncMessageHandler : NSObject

{
    Class _syncEntityClass;
    struct HDSyncAnchorRange _anchorRange;
    HDSyncSession *_session;
    HDSyncAnchorMap *_requiredAnchorMap;
    long long _nextSequence;
    long long _currentAnchor;
    long long _sendChangesStatus;
    NSError *_sendChangesError;
}

@property (nonatomic, readonly) long long currentAnchor;
@property (nonatomic, readonly) long long sendChangesStatus;
@property (copy, nonatomic, readonly) NSError *sendChangesError;

- (_Bool)sendCodableObjects:(id)arg1 resultAnchor:(long long)arg2 done:(_Bool)arg3 error:(id *)arg4;
- (id)initWithSyncEntityClass:(Class)arg1 anchorRange:(struct HDSyncAnchorRange)arg2 session:(id)arg3 requiredAnchorMap:(id)arg4;
- (long long)_sendChanges:(id)arg1 error:(id *)arg2;

@end
