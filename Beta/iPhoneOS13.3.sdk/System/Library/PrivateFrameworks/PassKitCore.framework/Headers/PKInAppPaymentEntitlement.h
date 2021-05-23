/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject

{
    NSArray *_merchantIdentifiers;
    _Bool _ignoreMerchantIdentifiers;
}

@property (nonatomic, readonly) _Bool ignoreMerchantIdentifiers;
@property (nonatomic, readonly) _Bool hasMerchantIdentifiers;

- (id)initWithToken:(CDStruct_6ad76789)arg1;
- (void)_probeEntitlementsWithToken:(CDStruct_6ad76789)arg1;
- (_Bool)hasMerchantIdentifier:(id)arg1;

@end
