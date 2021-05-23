/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface FCBundleSubscriptionLookUpEntry : NSObject

{
    _Bool _hasShownRenewalNotice;
    _Bool _inTrialPeriod;
    _Bool _isPurchaser;
    _Bool _isAmplifyUser;
    NSString *_identifier;
    NSString *_purchaseID;
    NSDate *_dateOfExpiration;
    unsigned long long _purchaseValidationState;
    NSArray *_bundleChannelIDs;
}

@property (nonatomic) unsigned long long purchaseValidationState;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *bundleChannelIDs;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSDate *dateOfExpiration;
@property (nonatomic) _Bool hasShownRenewalNotice;
@property (nonatomic) _Bool inTrialPeriod;
@property (nonatomic) _Bool isPurchaser;
@property (nonatomic) _Bool isAmplifyUser;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)bundleSubscription;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 bundleChannelIDs:(id)arg2 purchaseID:(id)arg3 purchaseValidationState:(unsigned long long)arg4 dateOfExpiration:(id)arg5 hasShownRenewalNotice:(_Bool)arg6 inTrialPeriod:(_Bool)arg7 isPurchaser:(_Bool)arg8 isAmplifyUser:(_Bool)arg9;

@end
