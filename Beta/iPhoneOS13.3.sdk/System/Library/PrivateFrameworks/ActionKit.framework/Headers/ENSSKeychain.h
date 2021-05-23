/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@interface ENSSKeychain : NSObject

+ (id)accountsForService:(id)arg1;
+ (id)allAccounts;
+ (id)passwordForService:(id)arg1 account:(id)arg2;
+ (id)passwordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (_Bool)deletePasswordForService:(id)arg1 account:(id)arg2;
+ (_Bool)deletePasswordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (_Bool)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3;
+ (_Bool)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id *)arg4;
+ (void *)accessibilityType;
+ (void)setAccessibilityType:(void *)arg1;

@end
