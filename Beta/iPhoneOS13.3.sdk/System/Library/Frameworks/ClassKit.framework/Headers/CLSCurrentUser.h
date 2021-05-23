/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class CLSPerson, NSDictionary;

@interface CLSCurrentUser : NSObject

{
    int _devMode;
    CLSPerson *_person;
    unsigned long long _roles;
    NSDictionary *_locationIDsByAXMRoleType;
}

@property (nonatomic) int devMode;
@property (retain, nonatomic) CLSPerson *person;
@property (nonatomic) unsigned long long roles;
@property (retain, nonatomic) NSDictionary *locationIDsByAXMRoleType;
@property (nonatomic, readonly) _Bool isAdministrator;
@property (nonatomic, readonly) _Bool isInstructor;
@property (nonatomic, readonly) _Bool isStudent;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)arg1;
+ (id)magicValue;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (unsigned long long)_useRoles;
- (_Bool)_hasRole:(unsigned long long)arg1;
- (_Bool)hasRole:(unsigned long long)arg1;

@end
