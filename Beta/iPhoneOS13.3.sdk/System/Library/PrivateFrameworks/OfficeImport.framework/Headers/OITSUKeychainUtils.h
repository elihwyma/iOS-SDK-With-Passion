/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUKeychainUtils : NSObject

+ (_Bool)lookupGenericItem:(id)arg1 account:(id *)arg2 passphrase:(id *)arg3 policy:(long long)arg4 error:(id *)arg5;
+ (_Bool)removeGenericItem:(id)arg1 error:(id *)arg2;
+ (_Bool)shouldUseTouchID;
+ (void)cryptoProcessData:(id)arg1 encrypt:(_Bool)arg2 localizedReason:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)errorForStatus:(int)arg1;
+ (_Bool)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 policy:(long long)arg7 error:(id *)arg8;
+ (id)mutableQueryForGenericItem:(id)arg1 returnData:(_Bool)arg2;
+ (void)authenticateAndUpgradeKeychainResult:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (long long)touchIDAvailability;
+ (void)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 policy:(long long)arg7 completionQueue:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (void)lookupGenericItem:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)cancelTouchIDIfNeeded;
+ (_Bool)lookupGenericItem:(id)arg1 passphrase:(id *)arg2 policy:(long long)arg3 error:(id *)arg4;
+ (id)defaultServiceForGenericItem:(id)arg1;
+ (id)defaultDocumentPasswordDescriptionString;

@end
