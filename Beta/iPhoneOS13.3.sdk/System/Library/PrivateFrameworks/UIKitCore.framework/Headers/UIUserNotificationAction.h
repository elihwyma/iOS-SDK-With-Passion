/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface UIUserNotificationAction : NSObject <Swift>

{
    _Bool _authenticationRequired;
    _Bool _destructive;
    NSString *_activationModeString;
    NSString *_behaviorString;
    NSString *_identifier;
    NSString *_title;
    unsigned long long _behavior;
    NSDictionary *_parameters;
    unsigned long long _activationMode;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long behavior;
@property (copy, nonatomic) NSDictionary *parameters;
@property (nonatomic) unsigned long long activationMode;
@property (nonatomic, getter=isAuthenticationRequired) _Bool authenticationRequired;
@property (nonatomic, getter=isDestructive) _Bool destructive;
@property (nonatomic, readonly) NSString *activationModeString;
@property (nonatomic, readonly) NSString *behaviorString;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)validatedAction;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 behavior:(unsigned long long)arg3 parameters:(id)arg4 activationMode:(unsigned long long)arg5 isAuthenticationRequired:(_Bool)arg6 isDestructive:(_Bool)arg7;

@end
