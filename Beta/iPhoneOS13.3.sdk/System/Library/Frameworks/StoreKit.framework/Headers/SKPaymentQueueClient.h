/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SKPaymentQueueClient : NSObject

{
    _Bool _allowsBootstrapCellularData;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    long long _environmentType;
    _Bool _hidesConfirmationDialogs;
    _Bool _ignoresInAppPurchaseRestriction;
    NSString *_receiptDirectoryPath;
    _Bool _requiresAuthenticationForPayment;
    NSNumber *_storeExternalVersion;
    NSNumber *_storeItemIdentifier;
    NSString *_vendorIdentifier;
}

@property (nonatomic) _Bool allowsBootstrapCellularData;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (nonatomic) long long environmentType;
@property (nonatomic) _Bool hidesConfirmationDialogs;
@property (nonatomic) _Bool ignoresInAppPurchaseRestriction;
@property (copy, nonatomic) NSString *receiptDirectoryPath;
@property (nonatomic) _Bool requiresAuthenticationForPayment;
@property (copy, nonatomic) NSNumber *storeExternalVersion;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSString *vendorIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)plist;

@end
