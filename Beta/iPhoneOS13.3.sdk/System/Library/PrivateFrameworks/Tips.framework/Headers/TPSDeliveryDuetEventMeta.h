/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDeliveryObject.h>

@class NSNumber, NSString;

@interface TPSDeliveryDuetEventMeta : TPSDeliveryObject

{
    NSString *_context;
    NSString *_domain;
    NSString *_intentVerb;
    NSString *_intentClass;
    NSNumber *_intentDirection;
    NSNumber *_donatedBySiri;
}

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *intentVerb;
@property (copy, nonatomic) NSString *intentClass;
@property (copy, nonatomic) NSNumber *intentDirection;
@property (copy, nonatomic) NSNumber *donatedBySiri;
@property (copy, nonatomic) NSString *context;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
