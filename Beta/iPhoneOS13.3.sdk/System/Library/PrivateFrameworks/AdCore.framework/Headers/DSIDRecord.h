/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DSIDRecord : NSObject

{
    _Bool _dirty;
    int _nextReconcileTimestamp;
    _Bool _accountIsT13;
    _Bool _accountIsU13;
    _Bool _accountIsU18;
    _Bool _accountAgeUnknown;
    _Bool _isActiveRecord;
    _Bool _isRestrictedByEU_GDPR;
    _Bool _isDPIDManatee;
    _Bool _isPlaceholderAccount;
    _Bool _accountLimitAdTrackingEnabled;
    _Bool _lastSentLimitAdTrackingStatus;
    _Bool _notificationRequired;
    int _limitAdTrackingTimestamp;
    int _segmentDataTimestamp;
    int _lastSentSegmentDataTimestamp;
    int _lastSegmentServedTimestamp;
    int _lastSentLimitAdTrackingTimestamp;
    int _lastPOSTLimitAdTrackingTimestamp;
    NSString *_DSID;
    NSString *_iCloudDSID;
    NSString *_segmentData;
    NSString *_IDFA;
    NSString *_iAdIDBeforeReset;
    NSMutableDictionary *_ADIDRecords;
    long long _lastJingleLimitAdTrackingResponse;
    long long _lastJingleAccountStatus;
}

@property (retain, nonatomic) NSString *DSID;
@property (retain, nonatomic) NSString *iCloudDSID;
@property (nonatomic) _Bool accountIsT13;
@property (nonatomic) _Bool accountIsU13;
@property (nonatomic) _Bool accountIsU18;
@property (nonatomic) _Bool accountAgeUnknown;
@property (nonatomic) _Bool isDPIDManatee;
@property (nonatomic) int limitAdTrackingTimestamp;
@property (retain, nonatomic) NSString *segmentData;
@property (nonatomic) int segmentDataTimestamp;
@property (nonatomic) int lastSentSegmentDataTimestamp;
@property (nonatomic) int lastSegmentServedTimestamp;
@property (retain, nonatomic) NSString *IDFA;
@property (retain, nonatomic) NSString *iAdIDBeforeReset;
@property (nonatomic) _Bool isPlaceholderAccount;
@property (retain) NSMutableDictionary *ADIDRecords;
@property (nonatomic) _Bool accountLimitAdTrackingEnabled;
@property (nonatomic) long long lastJingleLimitAdTrackingResponse;
@property (nonatomic) long long lastJingleAccountStatus;
@property (nonatomic) _Bool lastSentLimitAdTrackingStatus;
@property (nonatomic) int lastSentLimitAdTrackingTimestamp;
@property (nonatomic) int lastPOSTLimitAdTrackingTimestamp;
@property (nonatomic) int nextReconcileTimestamp;
@property (nonatomic) _Bool dirty;
@property (nonatomic) _Bool notificationRequired;
@property (nonatomic, readonly) _Bool isActiveRecord;
@property (nonatomic, readonly) _Bool limitAdTrackingEnabled;
@property (nonatomic, readonly) _Bool isRestrictedByApple;
@property (nonatomic, readonly) _Bool isRestrictedByEU_GDPR;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)idForClientType:(long long)arg1;
- (void)setID:(id)arg1 forClientType:(long long)arg2;
- (id)initWithDSID:(id)arg1 serializedRecord:(id)arg2 version:(int)arg3;
- (_Bool)shouldSendNotification;
- (id)encryptedIDForClientType:(long long)arg1;
- (_Bool)iAdIDRecordsDirty;
- (void)setlimitAdTrackingTimestamp:(int)arg1;

@end
