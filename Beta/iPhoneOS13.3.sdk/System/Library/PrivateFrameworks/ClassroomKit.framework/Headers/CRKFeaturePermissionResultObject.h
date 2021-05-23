/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CRKFeaturePermissionResultObject : NSObject

{
    _Bool _modifiable;
    unsigned long long _permission;
}

@property (nonatomic) unsigned long long permission;
@property (nonatomic, getter=isModifiable) _Bool modifiable;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
