/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *phone;
@property (nonatomic, readonly) NSString *name;

+ (long long)dataType;

- (id)errors;
- (_Bool)isValidWithError:(id *)arg1;
- (id)requiredContactFields;
- (id)errorsForContactFields:(id)arg1;

@end
