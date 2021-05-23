/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INRestaurantOffer : NSObject <Swift>

{
    NSString *_offerTitleText;
    NSString *_offerDetailText;
    NSString *_offerIdentifier;
}

@property (copy, nonatomic) NSString *offerTitleText;
@property (copy, nonatomic) NSString *offerDetailText;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;

@end
