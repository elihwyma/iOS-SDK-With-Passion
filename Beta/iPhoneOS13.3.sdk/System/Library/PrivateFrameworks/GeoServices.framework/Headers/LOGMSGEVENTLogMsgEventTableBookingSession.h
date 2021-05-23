/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface LOGMSGEVENTLogMsgEventTableBookingSession : PBCodable

{
    PBDataReader *_reader;
    long long _blurredBookingTimestamp;
    long long _blurredReservationTimestamp;
    NSString *_bookTableAppId;
    NSString *_bookTableSessionId;
    double _durationOfSessionInSeconds;
    NSMutableArray *_errorMessages;
    NSString *_installNeededTappedAppId;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _endState;
    int _endView;
    unsigned int _tableSize;
    _Bool _addedSpecialRequest;
    _Bool _installCompleted;
    _Bool _installNeeded;
    _Bool _swipedAvailableTimes;
    _Bool _tappedDatePicker;
    struct {
        unsigned int has_blurredBookingTimestamp:1;
        unsigned int has_blurredReservationTimestamp:1;
        unsigned int has_durationOfSessionInSeconds:1;
        unsigned int has_muid:1;
        unsigned int has_endState:1;
        unsigned int has_endView:1;
        unsigned int has_tableSize:1;
        unsigned int has_addedSpecialRequest:1;
        unsigned int has_installCompleted:1;
        unsigned int has_installNeeded:1;
        unsigned int has_swipedAvailableTimes:1;
        unsigned int has_tappedDatePicker:1;
        unsigned int read_bookTableAppId:1;
        unsigned int read_bookTableSessionId:1;
        unsigned int read_errorMessages:1;
        unsigned int read_installNeededTappedAppId:1;
        unsigned int wrote_blurredBookingTimestamp:1;
        unsigned int wrote_blurredReservationTimestamp:1;
        unsigned int wrote_bookTableAppId:1;
        unsigned int wrote_bookTableSessionId:1;
        unsigned int wrote_durationOfSessionInSeconds:1;
        unsigned int wrote_errorMessages:1;
        unsigned int wrote_installNeededTappedAppId:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_endState:1;
        unsigned int wrote_endView:1;
        unsigned int wrote_tableSize:1;
        unsigned int wrote_addedSpecialRequest:1;
        unsigned int wrote_installCompleted:1;
        unsigned int wrote_installNeeded:1;
        unsigned int wrote_swipedAvailableTimes:1;
        unsigned int wrote_tappedDatePicker:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasBookTableSessionId;
@property (retain, nonatomic) NSString *bookTableSessionId;
@property (nonatomic) _Bool hasEndState;
@property (nonatomic) int endState;
@property (nonatomic) _Bool hasEndView;
@property (nonatomic) int endView;
@property (nonatomic, readonly) _Bool hasBookTableAppId;
@property (retain, nonatomic) NSString *bookTableAppId;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasBlurredReservationTimestamp;
@property (nonatomic) long long blurredReservationTimestamp;
@property (nonatomic) _Bool hasBlurredBookingTimestamp;
@property (nonatomic) long long blurredBookingTimestamp;
@property (nonatomic) _Bool hasDurationOfSessionInSeconds;
@property (nonatomic) double durationOfSessionInSeconds;
@property (nonatomic) _Bool hasInstallNeeded;
@property (nonatomic) _Bool installNeeded;
@property (nonatomic, readonly) _Bool hasInstallNeededTappedAppId;
@property (retain, nonatomic) NSString *installNeededTappedAppId;
@property (nonatomic) _Bool hasInstallCompleted;
@property (nonatomic) _Bool installCompleted;
@property (nonatomic) _Bool hasTableSize;
@property (nonatomic) unsigned int tableSize;
@property (nonatomic) _Bool hasAddedSpecialRequest;
@property (nonatomic) _Bool addedSpecialRequest;
@property (nonatomic) _Bool hasSwipedAvailableTimes;
@property (nonatomic) _Bool swipedAvailableTimes;
@property (nonatomic) _Bool hasTappedDatePicker;
@property (nonatomic) _Bool tappedDatePicker;
@property (retain, nonatomic) NSMutableArray *errorMessages;

+ (_Bool)isValid:(id)arg1;
+ (Class)errorMessageType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readErrorMessages;
- (void)_addNoFlagsErrorMessage:(id)arg1;
- (unsigned long long)errorMessagesCount;
- (void)clearErrorMessages;
- (id)errorMessageAtIndex:(unsigned long long)arg1;
- (void)addErrorMessage:(id)arg1;
- (id)endStateAsString:(int)arg1;
- (int)StringAsEndState:(id)arg1;
- (id)endViewAsString:(int)arg1;
- (int)StringAsEndView:(id)arg1;
- (void)_readBookTableSessionId;
- (void)_readBookTableAppId;
- (void)_readInstallNeededTappedAppId;

@end
