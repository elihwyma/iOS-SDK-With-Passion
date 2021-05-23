/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString, PKTransitPassProperties;

@interface PKTransitBalanceModel : NSObject

{
    NSDictionary *_balancesByID;
    NSArray *_balanceFields;
    PKTransitPassProperties *_transitProperties;
    NSArray *_displayableBalances;
}

@property (nonatomic, readonly) NSString *primaryDisplayableBalance;
@property (nonatomic, readonly) NSArray *displayableBalances;
@property (nonatomic, readonly) _Bool hasContent;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPass:(id)arg1;
- (void)setTransitProperties:(id)arg1;
- (void)setServerBalancesByID:(id)arg1;
- (void)_updatePrimaryDisplayableBalance;
- (void)setServerBalances:(id)arg1;

@end
