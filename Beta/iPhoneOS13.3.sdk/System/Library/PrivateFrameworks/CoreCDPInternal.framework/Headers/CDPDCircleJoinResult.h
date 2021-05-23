/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@interface CDPDCircleJoinResult : NSObject

{
    _Bool _didJoin;
    _Bool _needsBackupRecovery;
    _Bool _hasPeersForRemoteApproval;
    _Bool _hasPeersWithCDPBackupRecords;
    _Bool _requiresEscrowRecordsFetch;
    _Bool _requiresInitialSync;
    unsigned long long _remotePeeriCKState;
    unsigned long long _circleStatus;
}

@property _Bool didJoin;
@property _Bool needsBackupRecovery;
@property _Bool hasPeersForRemoteApproval;
@property _Bool hasPeersWithCDPBackupRecords;
@property _Bool requiresEscrowRecordsFetch;
@property _Bool requiresInitialSync;
@property unsigned long long remotePeeriCKState;
@property unsigned long long circleStatus;

@end
