/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (NUDigest)

- (void)nu_updateDigest:(id)arg1;
- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id *)arg2;
- (id)nu_unwrapJSValue;

@end
