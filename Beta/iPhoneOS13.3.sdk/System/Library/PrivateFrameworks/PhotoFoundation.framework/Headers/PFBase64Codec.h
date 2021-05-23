/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFBase64Codec : NSObject

+ (const char *)alphabet;
+ (const char *)decoder;
+ (unsigned long long)encodedUuidLength;
+ (_Bool)appendPadding;
+ (_Bool)checkTerminators:(long long)arg1 expected:(long long)arg2;
+ (id)encodeBytes:(const void *)arg1 withLength:(unsigned long long)arg2;
+ (_Bool)decodeString:(id)arg1 with:(CDUnknownBlockType)arg2;
+ (id)encodeData:(id)arg1;
+ (id)encodeUuid:(id)arg1;
+ (id)decodeString:(id)arg1;
+ (id)decodeUuid:(id)arg1;

- (id)init;

@end
