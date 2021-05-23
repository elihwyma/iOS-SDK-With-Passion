/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface FCPurchaseLookUpEntry : NSObject

{
    _Bool _isNewsAppPurchase;
    _Bool _hasShownRenewalNotice;
    unsigned long long _purchaseType;
    unsigned long long _purchaseValidationState;
    NSDate *_lastVerificationTime;
    NSDate *_lastVerificationFailureTime;
    NSString *_purchaseID;
    NSString *_tagID;
    NSString *_identifier;
    NSDate *_dateOfExpiration;
}

@property (nonatomic) unsigned long long purchaseType;
@property (nonatomic) unsigned long long purchaseValidationState;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *tagID;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSDate *lastVerificationTime;
@property (copy, nonatomic) NSDate *lastVerificationFailureTime;
@property (nonatomic) _Bool isNewsAppPurchase;
@property (copy, nonatomic) NSDate *dateOfExpiration;
@property (nonatomic) _Bool hasShownRenewalNotice;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 lastVerificationTime:(id)arg4 lastVerificationFailureTime:(id)arg5 purchaseType:(unsigned long long)arg6 purchaseValidationState:(unsigned long long)arg7 isNewsAppPurchase:(_Bool)arg8 dateOfExpiration:(id)arg9 hasShownRenewalNotice:(_Bool)arg10;

@end
