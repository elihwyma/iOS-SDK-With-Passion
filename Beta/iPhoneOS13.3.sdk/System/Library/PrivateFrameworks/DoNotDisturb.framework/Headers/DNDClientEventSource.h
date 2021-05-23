/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class NSString;

@interface DNDClientEventSource : NSObject

{
    NSString *_value;
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSString *value;

+ (_Bool)supportsSecureCoding;
+ (id)sourceWithDestinationIdentifier:(id)arg1;
+ (id)sourceWithCNContactIdentifier:(id)arg1;
+ (id)sourceWithPhoneNumber:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithValue:(id)arg1 type:(unsigned long long)arg2;

@end
