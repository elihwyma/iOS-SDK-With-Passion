/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface SKPaymentDiscountInternal : NSObject

{
    NSString *_identifier;
    NSString *_keyIdentifier;
    NSUUID *_nonce;
    NSString *_signature;
    NSNumber *_timestamp;
}

@end
