/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class VRFPublicKey;

@interface TransparencyVRFVerifier : NSObject

{
    VRFPublicKey *_key;
}

@property (retain) VRFPublicKey *key;
@property (readonly) int vrfType;

+ (_Bool)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 key:(id)arg5 error:(id *)arg6;
+ (id)verifierOfType:(int)arg1 key:(id)arg2;
+ (_Bool)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 key:(id)arg4 error:(id *)arg5;
+ (id)saltMessage:(id)arg1 salt:(id)arg2;

- (id)initWithKey:(id)arg1;
- (_Bool)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 error:(id *)arg5;
- (_Bool)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 error:(id *)arg4;

@end
