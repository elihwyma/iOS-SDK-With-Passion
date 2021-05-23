/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKPassPersonalization : NSObject <Swift>

{
    unsigned long long _requiredPersonalizationFields;
    NSString *_termsAndConditions;
    NSString *_localizedDescription;
}

@property (nonatomic, readonly) unsigned long long requiredPersonalizationFields;
@property (nonatomic, readonly) NSString *termsAndConditions;
@property (nonatomic, readonly) NSString *localizedDescription;

+ (_Bool)supportsSecureCoding;
+ (id)passPersonalizationWithPassBundle:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end
