/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFBase64Codec.h>

@interface PFBase64MercuryCodec : PFBase64Codec

+ (const char *)alphabet;
+ (const char *)decoder;
+ (unsigned long long)encodedUuidLength;
+ (_Bool)appendPadding;
+ (_Bool)checkTerminators:(long long)arg1 expected:(long long)arg2;

@end
