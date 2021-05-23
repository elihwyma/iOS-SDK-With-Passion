/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class CLLocation, NSString;

@interface INRestaurant : NSObject <Swift>

{
    CLLocation *_location;
    NSString *_name;
    NSString *_vendorIdentifier;
    NSString *_restaurantIdentifier;
}

@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *vendorIdentifier;
@property (copy, nonatomic) NSString *restaurantIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithLocation:(id)arg1 name:(id)arg2 vendorIdentifier:(id)arg3 restaurantIdentifier:(id)arg4;
- (_Bool)location:(id)arg1 equalToLocation:(id)arg2;

@end
