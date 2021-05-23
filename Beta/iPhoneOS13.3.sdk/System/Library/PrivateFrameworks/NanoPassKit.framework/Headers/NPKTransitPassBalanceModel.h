/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, PKPaymentPass, PKTransitPassProperties;

@interface NPKTransitPassBalanceModel : NSObject

{
    PKPaymentPass *_pass;
    NSArray *_transitBalanceFields;
    PKTransitPassProperties *_transitPassProperties;
    NSSet *_serverBalances;
}

@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) NSArray *transitBalanceFields;
@property (retain, nonatomic) PKTransitPassProperties *transitPassProperties;
@property (copy, nonatomic) NSSet *serverBalances;

- (_Bool)isEqual:(id)arg1;
- (id)initWithPass:(id)arg1;
- (void)_updateTransitBalanceFields;
- (id)_balanceByIDWithBalances:(id)arg1;
- (id)_primaryDisplayableBalanceFieldWithBalancesByID:(id)arg1;
- (id)_backOfThePassBalanceFieldsWithBalancesByID:(id)arg1;
- (id)_balanceFieldsWithBalancesByID:(id)arg1 passFields:(id)arg2 maximumCount:(unsigned long long)arg3;
- (id)_fieldWithBalance:(id)arg1;

@end
