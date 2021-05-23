/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSSet, NSString;

@interface EDAMSubscriptionInfo : FATObject

{
    NSNumber *_currentTime;
    NSNumber *_currentlySubscribed;
    NSNumber *_subscriptionRecurring;
    NSNumber *_subscriptionExpirationDate;
    NSNumber *_subscriptionPending;
    NSNumber *_subscriptionCancellationPending;
    NSSet *_serviceLevelsEligibleForPurchase;
    NSString *_currentSku;
    NSNumber *_validUntil;
    NSNumber *_itunesReceiptRequested;
}

@property (retain, nonatomic) NSNumber *currentTime;
@property (retain, nonatomic) NSNumber *currentlySubscribed;
@property (retain, nonatomic) NSNumber *subscriptionRecurring;
@property (retain, nonatomic) NSNumber *subscriptionExpirationDate;
@property (retain, nonatomic) NSNumber *subscriptionPending;
@property (retain, nonatomic) NSNumber *subscriptionCancellationPending;
@property (retain, nonatomic) NSSet *serviceLevelsEligibleForPurchase;
@property (retain, nonatomic) NSString *currentSku;
@property (retain, nonatomic) NSNumber *validUntil;
@property (retain, nonatomic) NSNumber *itunesReceiptRequested;

+ (id)structName;
+ (id)structFields;

@end
