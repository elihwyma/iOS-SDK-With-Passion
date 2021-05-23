/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary;

@interface PKServiceProviderPurchaseData : NSObject <Swift>

{
    NSDictionary *_dictionaryRepresentation;
}

@property (copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToPKServiceProviderPurchaseData:(id)arg1;

@end
