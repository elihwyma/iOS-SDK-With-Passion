/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAAction.h>

@class NSString;

@interface DAEditPropertyAction : DAAction

{
    NSString *_propertyName;
    NSString *_value;
    NSString *_propertyNamespace;
}

@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) NSString *propertyNamespace;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChangedItem:(id)arg1 propertyName:(id)arg2 value:(id)arg3 propertyNamespace:(id)arg4 serverId:(id)arg5;

@end
