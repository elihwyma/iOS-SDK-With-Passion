/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKTransitAppletState.h>

@class NSData, NSNumber, NSString;

@interface PKFelicaTransitAppletState : PKTransitAppletState

{
    _Bool _shinkansenTicketActive;
    _Bool _greenCarTicketUsed;
    _Bool _balanceAllowedForCommute;
    _Bool _lowBalanceNotificationEnabled;
    _Bool _hasShinkansenTicket;
    _Bool _hasGreenCarTicket;
    NSNumber *_shinkansenValidityStartDate;
    NSNumber *_shinkansenValidityTerm;
    NSData *_shinkansenOriginStationCode;
    NSData *_shinkansenDestinationStationCode;
    NSNumber *_shinkansenDepartureTime;
    NSNumber *_shinkansenArrivalTime;
    NSString *_shinkansenTrainName;
    NSNumber *_shinkansenCarNumber;
    NSNumber *_shinkansenSeatRow;
    NSNumber *_shinkansenSeatNumber;
    NSData *_shinkansenSecondaryOriginStationCode;
    NSData *_shinkansenSecondaryDestinationStationCode;
    NSNumber *_shinkansenSecondaryDepartureTime;
    NSNumber *_shinkansenSecondaryArrivalTime;
    NSString *_shinkansenSecondaryTrainName;
    NSNumber *_shinkansenSecondaryCarNumber;
    NSNumber *_shinkansenSecondarySeatRow;
    NSNumber *_shinkansenSecondarySeatNumber;
    NSData *_greenCarOriginStationCode;
    NSData *_greenCarDestinationStationCode;
    NSNumber *_greenCarValidityStartDate;
    NSString *_shinkansenOriginStationString;
    NSString *_shinkansenDestinationStationString;
    NSString *_shinkansenSecondaryOriginStationString;
    NSString *_shinkansenSecondaryDestinationStationString;
    NSString *_greenCarOriginStationString;
    NSString *_greenCarDestinationStationString;
}

@property (nonatomic, getter=isShinkansenTicketActive) _Bool shinkansenTicketActive;
@property (nonatomic, getter=isGreenCarTicketUsed) _Bool greenCarTicketUsed;
@property (nonatomic, getter=isBalanceAllowedForCommute) _Bool balanceAllowedForCommute;
@property (nonatomic, getter=isLowBalanceNotificationEnabled) _Bool lowBalanceNotificationEnabled;
@property (copy, nonatomic) NSNumber *shinkansenValidityStartDate;
@property (copy, nonatomic) NSNumber *shinkansenValidityTerm;
@property (copy, nonatomic) NSData *shinkansenOriginStationCode;
@property (copy, nonatomic) NSData *shinkansenDestinationStationCode;
@property (copy, nonatomic) NSNumber *shinkansenDepartureTime;
@property (copy, nonatomic) NSNumber *shinkansenArrivalTime;
@property (copy, nonatomic) NSString *shinkansenTrainName;
@property (copy, nonatomic) NSNumber *shinkansenCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSeatNumber;
@property (copy, nonatomic) NSNumber *shinkansenSeatRow;
@property (copy, nonatomic) NSData *shinkansenSecondaryOriginStationCode;
@property (copy, nonatomic) NSData *shinkansenSecondaryDestinationStationCode;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryDepartureTime;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryArrivalTime;
@property (copy, nonatomic) NSString *shinkansenSecondaryTrainName;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatRow;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber;
@property (copy, nonatomic) NSData *greenCarOriginStationCode;
@property (copy, nonatomic) NSData *greenCarDestinationStationCode;
@property (copy, nonatomic) NSNumber *greenCarValidityStartDate;
@property (nonatomic) _Bool hasGreenCarTicket;
@property (nonatomic) _Bool hasShinkansenTicket;
@property (copy, nonatomic) NSString *shinkansenOriginStationString;
@property (copy, nonatomic) NSString *shinkansenDestinationStationString;
@property (copy, nonatomic) NSString *shinkansenSecondaryOriginStationString;
@property (copy, nonatomic) NSString *shinkansenSecondaryDestinationStationString;
@property (copy, nonatomic) NSString *greenCarOriginStationString;
@property (copy, nonatomic) NSString *greenCarDestinationStationString;
@property (nonatomic, readonly, getter=isInShinkansenStation) _Bool inShinkansenStation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id *)arg4 ephemeralTransaction:(id *)arg5;
- (_Bool)isInStation;
- (id)_concreteTransactionForRecordAtIndex:(unsigned long long)arg1 withBalance:(unsigned int *)arg2 historyRecords:(id)arg3 terminalState:(id)arg4 numberProcessed:(unsigned long long *)arg5 exitedShinkansen:(_Bool *)arg6;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id *)arg2 ephemeralTransaction:(id *)arg3;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1;

@end
