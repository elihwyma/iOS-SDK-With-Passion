/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@interface SOUtils : NSObject

+ (_Bool)isInternalBuild;
+ (id)processNameForPID:(int)arg1;
+ (id)mapArray:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (int)mmapFile:(id)arg1 mode:(long long)arg2 mmapData:(id *)arg3;
+ (void)unmapFile:(int)arg1 data:(id)arg2;
+ (_Bool)checkEntitlementFromXPC:(id)arg1;
+ (_Bool)currentProcessIsSandboxed;
+ (_Bool)sandboxAllowsXPC:(const char *)arg1;
+ (id)currentProcessContainerPath;
+ (_Bool)auditTokenFromData:(id)arg1 auditToken:(CDStruct_6ad76789 *)arg2;
+ (int)pidFromAuditToken:(CDStruct_6ad76789)arg1;
+ (id)bundleIdentifierFromAuditToken:(CDStruct_6ad76789)arg1;
+ (id)currentProcessName;
+ (_Bool)currentProcessInSystemSession;
+ (id)signatureSetToString:(long long)arg1;
+ (_Bool)checkSignatureOfFile:(id)arg1 teamIdentifier:(id *)arg2 trusted:(_Bool *)arg3 signedBySet:(long long *)arg4 certificates:(id *)arg5 error:(id *)arg6;

@end
