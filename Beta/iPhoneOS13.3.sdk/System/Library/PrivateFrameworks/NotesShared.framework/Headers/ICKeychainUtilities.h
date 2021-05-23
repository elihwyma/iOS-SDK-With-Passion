/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICKeychainUtilities : NSObject

+ (_Bool)biometricIDIsEnrolled;
+ (_Bool)removeItemForIdentifier:(id)arg1 error:(id *)arg2;
+ (_Bool)addItemWithoutGuardian:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
+ (_Bool)addDevicePasscodeGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
+ (id)getItemForIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(id *)arg3;
+ (id)secAccessControlObjectWithCreationFlag:(unsigned long long)arg1 error:(id *)arg2;
+ (_Bool)addItem:(id)arg1 forIdentifier:(id)arg2 secAccessControlObject:(id)arg3 error:(id *)arg4;
+ (void)beginEvaluatePolicyReplyBlock;
+ (void)endEvaluatePolicyReplyBlock;
+ (_Bool)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg1;

@end
