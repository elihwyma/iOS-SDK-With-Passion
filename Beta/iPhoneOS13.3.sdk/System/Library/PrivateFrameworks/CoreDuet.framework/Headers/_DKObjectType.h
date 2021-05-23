/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _DKObjectType : NSObject

{
    long long _typeCode;
    Class _objectClass;
}

@property (nonatomic, readonly) long long typeCode;
@property (nonatomic, readonly) Class objectClass;

+ (_Bool)supportsSecureCoding;
+ (id)objectTypeWithName:(id)arg1;
+ (id)objectTypeFromClass:(Class)arg1;
+ (id)objectTypeWithTypeCode:(long long)arg1;
+ (Class)associatedObjectClass;
+ (long long)typeCodeFromName:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2;

@end
