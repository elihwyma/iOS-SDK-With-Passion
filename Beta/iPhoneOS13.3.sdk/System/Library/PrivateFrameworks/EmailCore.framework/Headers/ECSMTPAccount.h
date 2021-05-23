/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECSMTPAccount

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (long long)defaultPortNumber;
- (id)_hostnameFromParentAccount:(id)arg1;
- (id)portNumberObject;
- (id)usesSSLObject;

@end
