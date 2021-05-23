/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UNNotificationIcon : NSObject

{
    NSString *_applicationIdentifier;
    NSString *_name;
    NSString *_path;
}

@property (copy, nonatomic, readonly) NSString *applicationIdentifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *path;

+ (_Bool)supportsSecureCoding;
+ (id)iconNamed:(id)arg1;
+ (id)iconAtPath:(id)arg1;
+ (id)iconForApplicationIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithName:(id)arg1 path:(id)arg2 applicationIdentifier:(id)arg3;

@end
