/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKServiceProviderPurchaseData.h>

@interface PKPeerPaymentPurchaseData : PKServiceProviderPurchaseData

{
    _Bool _requiresInteraction;
    unsigned long long _status;
}

@property (nonatomic) unsigned long long status;
@property (nonatomic) _Bool requiresInteraction;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToPKPeerPaymentPurchaseData:(id)arg1;

@end
