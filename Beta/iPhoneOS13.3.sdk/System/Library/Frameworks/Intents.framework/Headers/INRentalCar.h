/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INRentalCar : NSObject <Swift>

{
    NSString *_rentalCompanyName;
    NSString *_type;
    NSString *_make;
    NSString *_model;
    NSString *_rentalCarDescription;
}

@property (copy, nonatomic, readonly) NSString *rentalCompanyName;
@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) NSString *make;
@property (copy, nonatomic, readonly) NSString *model;
@property (copy, nonatomic, readonly) NSString *rentalCarDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithRentalCompanyName:(id)arg1 type:(id)arg2 make:(id)arg3 model:(id)arg4 rentalCarDescription:(id)arg5;

@end
