/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class HKObjectType;

@interface WFHealthKitAuthorizationUnit : NSObject

{
    HKObjectType *_objectType;
    long long _accessType;
}

@property (nonatomic, readonly) HKObjectType *objectType;
@property (nonatomic, readonly) long long accessType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectType:(id)arg1 accessType:(long long)arg2;

@end
