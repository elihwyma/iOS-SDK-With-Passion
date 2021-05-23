/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TransparencySignatureVerifier : NSObject

{
    _Bool _needsRefresh;
    NSDictionary *_trustedKeys;
}

@property (retain) NSDictionary *trustedKeys;
@property _Bool needsRefresh;

+ (_Bool)verifyMessage:(id)arg1 signature:(id)arg2 spkiHash:(id)arg3 trustedKeys:(id)arg4 algorithm:(struct __CFString *)arg5 error:(id *)arg6;
+ (const struct __CFString *)secKeyAlgorithmForProtoAlgorithm:(int)arg1;
+ (int)protoAlgorithmForSecKeyAlgorithm:(struct __CFString *)arg1;

- (id)initWithTrustedKeys:(id)arg1;
- (_Bool)verifyMessage:(id)arg1 signature:(id)arg2 spkiHash:(id)arg3 algorithm:(struct __CFString *)arg4 error:(id *)arg5;

@end
