/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPremiumInfo : FATObject

{
    NSNumber *_currentTime;
    NSNumber *_premium;
    NSNumber *_premiumRecurring;
    NSNumber *_premiumExpirationDate;
    NSNumber *_premiumExtendable;
    NSNumber *_premiumPending;
    NSNumber *_premiumCancellationPending;
    NSNumber *_canPurchaseUploadAllowance;
    NSString *_sponsoredGroupName;
    NSNumber *_sponsoredGroupRole;
    NSNumber *_premiumUpgradable;
}

@property (retain, nonatomic) NSNumber *currentTime;
@property (retain, nonatomic) NSNumber *premium;
@property (retain, nonatomic) NSNumber *premiumRecurring;
@property (retain, nonatomic) NSNumber *premiumExpirationDate;
@property (retain, nonatomic) NSNumber *premiumExtendable;
@property (retain, nonatomic) NSNumber *premiumPending;
@property (retain, nonatomic) NSNumber *premiumCancellationPending;
@property (retain, nonatomic) NSNumber *canPurchaseUploadAllowance;
@property (retain, nonatomic) NSString *sponsoredGroupName;
@property (retain, nonatomic) NSNumber *sponsoredGroupRole;
@property (retain, nonatomic) NSNumber *premiumUpgradable;

+ (id)structName;
+ (id)structFields;

@end
