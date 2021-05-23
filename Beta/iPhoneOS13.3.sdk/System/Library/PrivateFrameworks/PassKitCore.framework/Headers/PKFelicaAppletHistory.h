/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKTransitAppletHistory.h>

@class NSNumber, NSSet, NSString, PKFelicaGreenCarTicket, PKFelicaShinkansenTicket;

@interface PKFelicaAppletHistory : PKTransitAppletHistory

{
    NSSet *_existingKeys;
    _Bool _shinkansenTicketActive;
    _Bool _greenCarTicketUsed;
    _Bool _balanceAllowedForCommute;
    _Bool _lowBalanceNotificationEnabled;
    long long _type;
    NSString *_transactionID;
    NSNumber *_SPID;
    long long _transactionType;
    PKFelicaShinkansenTicket *_shinkansenTicket;
    PKFelicaGreenCarTicket *_greenCarTicket;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *transactionID;
@property (copy, nonatomic, readonly) NSNumber *SPID;
@property (nonatomic, readonly) long long transactionType;
@property (nonatomic, readonly, getter=isInShinkansenStation) _Bool inShinkansenStation;
@property (nonatomic, readonly, getter=isShinkansenTicketActive) _Bool shinkansenTicketActive;
@property (nonatomic, readonly, getter=isGreenCarTicketUsed) _Bool greenCarTicketUsed;
@property (nonatomic, readonly, getter=isBalanceAllowedForCommute) _Bool balanceAllowedForCommute;
@property (nonatomic, readonly, getter=isLowBalanceNotificationEnabled) _Bool lowBalanceNotificationEnabled;
@property (copy, nonatomic, readonly) PKFelicaShinkansenTicket *shinkansenTicket;
@property (nonatomic, readonly) PKFelicaGreenCarTicket *greenCarTicket;

+ (_Bool)supportsSecureCoding;
+ (long long)appletTypeForDictionary:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;
- (void)sanitizeValuesWithState:(id)arg1;
- (_Bool)isInStation;
- (void)_addEnrouteTransitType:(id)arg1;

@end
