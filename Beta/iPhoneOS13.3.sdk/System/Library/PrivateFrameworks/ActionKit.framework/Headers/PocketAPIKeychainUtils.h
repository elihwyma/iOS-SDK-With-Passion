/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@interface PocketAPIKeychainUtils : NSObject

+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (_Bool)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(_Bool)arg4 error:(id *)arg5;
+ (_Bool)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;

@end
