/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class CKServerChangeToken, NSDate, NSDictionary, NSString;

@interface _HDCloudSyncStorePersistableState : NSObject <Swift>

{
    _Bool _hasEncounteredGapInCurrentEpoch;
    int _syncProtocolVersion;
    NSString *_ownerIdentifier;
    NSString *_containerIdentifier;
    CKServerChangeToken *_serverChangeToken;
    unsigned long long _baselineEpoch;
    NSDate *_rebaseDeadline;
    NSDate *_lastSyncDate;
    NSDictionary *_emptyZoneDateByZoneID;
    NSDate *_lastCheckDate;
}

@property (nonatomic, readonly) NSString *ownerIdentifier;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) CKServerChangeToken *serverChangeToken;
@property (nonatomic, readonly) unsigned long long baselineEpoch;
@property (nonatomic, readonly) NSDate *rebaseDeadline;
@property (nonatomic, readonly) NSDate *lastSyncDate;
@property (nonatomic, readonly) NSDictionary *emptyZoneDateByZoneID;
@property (nonatomic, readonly) NSDate *lastCheckDate;
@property (nonatomic, readonly) _Bool hasEncounteredGapInCurrentEpoch;
@property (nonatomic, readonly) int syncProtocolVersion;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stateByResettingRebaselineDeadline;
- (id)stateByRecordingLastCheckDate:(id)arg1;
- (id)initWithServerChangeToken:(id)arg1 baselineEpoch:(unsigned long long)arg2 rebaseDeadline:(id)arg3 lastSyncDate:(id)arg4 emptyZones:(id)arg5 lastCheckDate:(id)arg6 ownerIdentifier:(id)arg7 containerIdentifier:(id)arg8 syncProtocolVersion:(int)arg9;
- (id)stateWithGapEncountered:(_Bool)arg1;
- (id)stateByRecordingLastSyncDate:(id)arg1;
- (id)stateWithServerChangeToken:(id)arg1;
- (id)stateWithSyncProtocolVersion:(int)arg1;
- (id)stateWithEmptyZones:(id)arg1;
- (id)stateWithBaselineEpoch:(unsigned long long)arg1;

@end
