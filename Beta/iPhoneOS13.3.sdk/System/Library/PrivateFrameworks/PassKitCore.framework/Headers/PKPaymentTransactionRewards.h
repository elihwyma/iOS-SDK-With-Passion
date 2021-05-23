/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray;

@interface PKPaymentTransactionRewards : NSObject <Swift>

{
    NSArray *_rewardsItems;
}

@property (retain, nonatomic) NSArray *rewardsItems;

+ (_Bool)supportsSecureCoding;
+ (id)_rewardsItemsSetFromJsonString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (id)jsonString;
- (id)jsonArrayRepresentation;
- (id)initWithRewardsItems:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (_Bool)isEqualToRewards:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)recordTypesAndNames;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (id)initWithJsonString:(id)arg1;

@end
