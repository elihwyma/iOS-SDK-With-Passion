/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INPriceRange, NSString;

@interface INRidePartySizeOption : NSObject <Swift>

{
    NSString *_sizeDescription;
    INPriceRange *_priceRange;
    struct _NSRange _partySizeRange;
}

@property (nonatomic, readonly) struct _NSRange partySizeRange;
@property (nonatomic, readonly) NSString *sizeDescription;
@property (nonatomic, readonly) INPriceRange *priceRange;
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
- (id)initWithPartySizeRange:(struct _NSRange)arg1 sizeDescription:(id)arg2 priceRange:(id)arg3;

@end
