/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@interface HAPProtocolMessages : HMFObject

+ (id)logCategory;
+ (id)constructTokenRequest:(id)arg1 outTID:(char *)arg2;
+ (_Bool)parseTokenResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(_Bool)arg3 outToken:(id *)arg4 outUUID:(id *)arg5;
+ (id)constructTokenUpdateRequest:(id)arg1 token:(id)arg2 outTID:(char *)arg3;
+ (_Bool)parseTokenUpdateResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(_Bool)arg3;
+ (id)parseInfoResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(_Bool)arg3;
+ (id)constructInfoRequest:(id)arg1 outTID:(char *)arg2;
+ (id)constructRequestHeaderFor:(unsigned long long)arg1 instanceID:(id)arg2 outTID:(char *)arg3;
+ (id)constructInfoRequest:(id)arg1 serviceUUID:(id)arg2 outTID:(char *)arg3;

@end
