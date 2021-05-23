/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSBiometricIdentity : NSObject

+ (id)identities;
+ (void)removeIdentity:(id)arg1;
+ (id)nameForIdentity:(id)arg1;
+ (long long)maximumIdentityCount;
+ (void)setName:(id)arg1 forIdentity:(id)arg2;
+ (id)nextIdentityName;

@end
