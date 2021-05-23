/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface FCOngoingPurchaseEntry : NSObject

{
    _Bool _webAccessOptIn;
    NSString *_identifier;
    NSString *_tagID;
    NSString *_purchaseID;
    NSString *_productID;
    NSNumber *_appAdamID;
    NSNumber *_storeExternalVersion;
    NSString *_vendorIdentifier;
    NSDate *_purchaseInitiatedTime;
    NSNumber *_price;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *tagID;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) _Bool webAccessOptIn;
@property (copy, nonatomic) NSNumber *appAdamID;
@property (copy, nonatomic) NSNumber *storeExternalVersion;
@property (copy, nonatomic) NSString *vendorIdentifier;
@property (copy, nonatomic) NSDate *purchaseInitiatedTime;
@property (copy, nonatomic) NSNumber *price;

+ (id)dummyOngoingPurchaseEntryWithTagID:(id)arg1;

- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 productID:(id)arg4 webAccessOptIn:(_Bool)arg5 appAdamID:(id)arg6 storeExternalVersion:(id)arg7 vendorIdentifier:(id)arg8 purchaseInitiatedTime:(id)arg9 price:(id)arg10;

@end
