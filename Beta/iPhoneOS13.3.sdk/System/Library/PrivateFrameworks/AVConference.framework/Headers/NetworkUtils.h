/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NetworkUtils : NSObject

+ (id)encryptionInfoForKey:(unsigned long long)arg1;
+ (int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 shouldConnect:(_Bool)arg3 error:(id *)arg4;
+ (int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id *)arg3;
+ (id)newEncryptionInfoWithMasterKeyIndex:(id)arg1;
+ (int)connectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id *)arg3;
+ (id)newRTPSocketDictionary:(_Bool)arg1 rtpSourcePort:(short)arg2;
+ (id)securityKeyMaterialWithMasterKeyIndex:(id)arg1;

@end
