/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString;

@interface PKPaymentCredentialMetadata : NSObject

{
    NSString *_localizedDisplayName;
    NSString *_value;
}

@property (copy, nonatomic, readonly) NSString *localizedDisplayName;
@property (copy, nonatomic, readonly) NSString *value;

+ (id)paymentCredentialMetadataWithConfiguration:(id)arg1;
+ (Class)classForValueType:(id)arg1;

- (id)initWithConfiguration:(id)arg1;
- (id)displayString;

@end
