/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKTransitPassProperties.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDateComponents, NSNumber, NSString;

@interface PKFelicaPassProperties : PKTransitPassProperties <Swift>

{
    _Bool _shinkansenTicketActive;
    _Bool _greenCarTicketUsed;
    _Bool _inShinkansenStation;
    _Bool _balanceAllowedForCommute;
    _Bool _lowBalanceGateNotificationEnabled;
    _Bool _hasGreenCarTicket;
    _Bool _hasShinkansenTicket;
    NSDateComponents *_shinkansenValidityStartDate;
    NSNumber *_shinkansenValidityTerm;
    NSString *_shinkansenOriginStation;
    NSString *_shinkansenDestinationStation;
    NSDateComponents *_shinkansenDepartureTime;
    NSDateComponents *_shinkansenArrivalTime;
    NSString *_shinkansenTrainName;
    NSNumber *_shinkansenCarNumber;
    NSNumber *_shinkansenSeatRow;
    NSNumber *_shinkansenSeatNumber;
    NSString *_shinkansenSecondaryOriginStation;
    NSString *_shinkansenSecondaryDestinationStation;
    NSDateComponents *_shinkansenSecondaryDepartureTime;
    NSDateComponents *_shinkansenSecondaryArrivalTime;
    NSString *_shinkansenSecondaryTrainName;
    NSNumber *_shinkansenSecondaryCarNumber;
    NSNumber *_shinkansenSecondarySeatRow;
    NSNumber *_shinkansenSecondarySeatNumber;
    NSString *_greenCarOriginStation;
    NSString *_greenCarDestinationStation;
    NSDateComponents *_greenCarValidityStartDate;
}

@property (nonatomic, getter=isShinkansenTicketActive) _Bool shinkansenTicketActive;
@property (nonatomic, getter=isGreenCarTicketUsed) _Bool greenCarTicketUsed;
@property (nonatomic, getter=isInShinkansenStation) _Bool inShinkansenStation;
@property (nonatomic, getter=isBalanceAllowedForCommute) _Bool balanceAllowedForCommute;
@property (nonatomic, getter=isLowBalanceGateNotificationEnabled) _Bool lowBalanceGateNotificationEnabled;
@property (copy, nonatomic) NSDateComponents *shinkansenValidityStartDate;
@property (copy, nonatomic) NSNumber *shinkansenValidityTerm;
@property (copy, nonatomic) NSString *shinkansenOriginStation;
@property (copy, nonatomic) NSString *shinkansenDestinationStation;
@property (copy, nonatomic) NSDateComponents *shinkansenDepartureTime;
@property (copy, nonatomic) NSDateComponents *shinkansenArrivalTime;
@property (copy, nonatomic) NSString *shinkansenTrainName;
@property (copy, nonatomic) NSNumber *shinkansenCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSeatRow;
@property (copy, nonatomic) NSNumber *shinkansenSeatNumber;
@property (copy, nonatomic) NSString *shinkansenSecondaryOriginStation;
@property (copy, nonatomic) NSString *shinkansenSecondaryDestinationStation;
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryDepartureTime;
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryArrivalTime;
@property (copy, nonatomic) NSString *shinkansenSecondaryTrainName;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatRow;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber;
@property (copy, nonatomic) NSString *greenCarOriginStation;
@property (copy, nonatomic) NSString *greenCarDestinationStation;
@property (copy, nonatomic) NSDateComponents *greenCarValidityStartDate;
@property (nonatomic) _Bool hasGreenCarTicket;
@property (nonatomic) _Bool hasShinkansenTicket;

+ (_Bool)supportsSecureCoding;
+ (id)passPropertiesForPass:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isInStation;
- (id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2;
- (id)_stringForRow:(id)arg1 seat:(id)arg2;
- (id)initWithFelicaAppletState:(id)arg1 paymentApplication:(id)arg2;
- (id)displayableShinkansenSeat;
- (id)displayableShinkansenSecondarySeat;

@end
