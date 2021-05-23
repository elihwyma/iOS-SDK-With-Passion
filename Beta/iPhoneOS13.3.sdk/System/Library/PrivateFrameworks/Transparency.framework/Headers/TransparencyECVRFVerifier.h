/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Transparency/TransparencyVRFVerifier.h>

@interface TransparencyECVRFVerifier : TransparencyVRFVerifier

{
    struct ccvrf vrf;
}

+ (_Bool)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 key:(id)arg5 error:(id *)arg6;
+ (_Bool)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 key:(id)arg4 error:(id *)arg5;

- (id)initWithKey:(id)arg1;
- (int)vrfType;
- (_Bool)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 error:(id *)arg5;
- (_Bool)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 error:(id *)arg4;

@end
