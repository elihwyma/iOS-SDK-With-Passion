/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPassField.h>

@class NSString;

@interface PKPassNumberField : PKPassField

{
    NSString *_currencyCode;
    long long _numberStyle;
}

@property (nonatomic) long long numberStyle;
@property (copy, nonatomic) NSString *currencyCode;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)value;

@end
