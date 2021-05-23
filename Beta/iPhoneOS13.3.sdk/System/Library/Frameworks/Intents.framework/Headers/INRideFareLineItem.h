/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@interface INRideFareLineItem : NSObject <Swift>

{
    NSString *_title;
    NSDecimalNumber *_price;
    NSString *_currencyCode;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly) NSString *currencyCode;
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
- (id)initWithTitle:(id)arg1 price:(id)arg2 currencyCode:(id)arg3;

@end
