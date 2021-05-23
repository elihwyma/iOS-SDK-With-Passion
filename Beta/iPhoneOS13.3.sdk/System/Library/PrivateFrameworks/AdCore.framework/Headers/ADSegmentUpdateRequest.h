/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface ADSegmentUpdateRequest : PBRequest

{
    CDStruct_95bda58d _accountStates;
    CDStruct_95bda58d _accountTypes;
    CDStruct_95bda58d _deviceModes;
    double _iTunesRefreshTime;
    double _updateSentTime;
    NSString *_advertisingIdentifier;
    int _advertisingIdentifierMonthResetCount;
    NSData *_dPID;
    NSData *_iAdID;
    NSString *_localeIdentifier;
    NSString *_osVersionAndBuild;
    NSString *_segmentInfo;
    float _timezone;
    _Bool _isFirstPartyIdentifier;
    struct {
        unsigned int iTunesRefreshTime:1;
        unsigned int updateSentTime:1;
        unsigned int advertisingIdentifierMonthResetCount:1;
        unsigned int timezone:1;
        unsigned int isFirstPartyIdentifier:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (nonatomic, readonly) _Bool hasSegmentInfo;
@property (retain, nonatomic) NSString *segmentInfo;
@property (nonatomic) _Bool hasIsFirstPartyIdentifier;
@property (nonatomic) _Bool isFirstPartyIdentifier;
@property (nonatomic, readonly) _Bool hasAdvertisingIdentifier;
@property (retain, nonatomic) NSString *advertisingIdentifier;
@property (nonatomic) _Bool hasITunesRefreshTime;
@property (nonatomic) double iTunesRefreshTime;
@property (nonatomic) _Bool hasUpdateSentTime;
@property (nonatomic) double updateSentTime;
@property (nonatomic) _Bool hasTimezone;
@property (nonatomic) float timezone;
@property (nonatomic) _Bool hasAdvertisingIdentifierMonthResetCount;
@property (nonatomic) int advertisingIdentifierMonthResetCount;
@property (nonatomic, readonly) _Bool hasOsVersionAndBuild;
@property (retain, nonatomic) NSString *osVersionAndBuild;
@property (nonatomic, readonly) _Bool hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (nonatomic, readonly) _Bool hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (nonatomic, readonly) unsigned long long deviceModesCount;
@property (nonatomic, readonly) int *deviceModes;
@property (nonatomic, readonly) unsigned long long accountTypesCount;
@property (nonatomic, readonly) int *accountTypes;
@property (nonatomic, readonly) unsigned long long accountStatesCount;
@property (nonatomic, readonly) int *accountStates;

+ (id)options;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAccountType:(int)arg1;
- (void)addDeviceMode:(int)arg1;
- (void)addAccountState:(int)arg1;
- (void)clearDeviceModes;
- (int)deviceModeAtIndex:(unsigned long long)arg1;
- (void)clearAccountTypes;
- (int)accountTypeAtIndex:(unsigned long long)arg1;
- (void)clearAccountStates;
- (int)accountStateAtIndex:(unsigned long long)arg1;
- (void)setDeviceModes:(int *)arg1 count:(unsigned long long)arg2;
- (id)deviceModesAsString:(int)arg1;
- (int)StringAsDeviceModes:(id)arg1;
- (void)setAccountTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)accountTypesAsString:(int)arg1;
- (int)StringAsAccountTypes:(id)arg1;
- (void)setAccountStates:(int *)arg1 count:(unsigned long long)arg2;
- (id)accountStatesAsString:(int)arg1;
- (int)StringAsAccountStates:(id)arg1;

@end
