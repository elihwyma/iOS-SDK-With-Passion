/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKServiceProviderPurchaseAction : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;

+ (_Bool)supportsSecureCoding;
+ (id)actionWithDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToServiceProviderPurchaseAction:(id)arg1;

@end
