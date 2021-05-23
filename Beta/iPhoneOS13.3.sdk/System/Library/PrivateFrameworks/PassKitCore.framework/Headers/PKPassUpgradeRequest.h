/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, PKOSVersionRequirement;

@interface PKPassUpgradeRequest : NSObject <Swift>

{
    unsigned long long _type;
    PKOSVersionRequirement *_minimumOSVersion;
    NSString *_secureElementIdentifier;
    NSArray *_paymentApplicationIdentifiers;
    NSDictionary *_fields;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) PKOSVersionRequirement *minimumOSVersion;
@property (nonatomic, readonly) NSString *secureElementIdentifier;
@property (nonatomic, readonly) NSArray *paymentApplicationIdentifiers;
@property (nonatomic, readonly) NSDictionary *fields;

+ (_Bool)supportsSecureCoding;
+ (id)passUpgradeRequestFromDictionary:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
