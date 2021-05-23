/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDeliveryObject.h>

@class NSString;

@interface TPSDeliveryDuetEventSource : TPSDeliveryObject

{
    NSString *_sourceID;
    NSString *_bundleID;
}

@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *bundleID;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
