/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface BCCertificatUtilities : NSObject

+ (struct __SecPolicy *)sslPolicyForHost:(id)arg1 client:(_Bool)arg2;
+ (_Bool)trustIncludesRevokedCertificate:(struct __SecTrust *)arg1;
+ (struct __SecTrust *)trustReferenceWithCertificates:(id)arg1 forPolicy:(struct __SecPolicy *)arg2;

@end
