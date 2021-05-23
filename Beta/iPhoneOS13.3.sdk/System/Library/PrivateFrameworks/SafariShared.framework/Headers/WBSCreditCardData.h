/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, PKVirtualCard, UIImage;

@interface WBSCreditCardData : NSObject

{
    NSString *_cardName;
    NSString *_cardholderName;
    NSString *_cardNumber;
    NSDate *_expirationDate;
    NSDate *_lastUsedDate;
    NSString *_cardSecurityCode;
    PKVirtualCard *_virtualCard;
}

@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *cardNumber;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSString *cardSecurityCode;
@property (nonatomic, readonly) PKVirtualCard *virtualCard;
@property (nonatomic, readonly) UIImage *virtualCardIcon;

- (id)description;
- (id)initWithCameraReaderOutput:(id)arg1;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4 securityCode:(id)arg5;
- (id)_expirationDateFromPKVirtualCard:(id)arg1;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4;
- (id)creditCardDataByUpdatingLastUsedDate:(id)arg1;
- (id)initWithVirtualCard:(id)arg1;
- (id)initWithVirtualCardCredentials:(id)arg1 virtualCard:(id)arg2;
- (id)initWithKeychainRepresentation:(id)arg1;
- (id)keychainRepresentation;
- (id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1;
- (_Bool)hasSameCreditCardInformationAs:(id)arg1;

@end
