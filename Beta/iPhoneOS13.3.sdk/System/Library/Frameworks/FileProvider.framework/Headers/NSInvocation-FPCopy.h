/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSInvocation.h>

@interface NSInvocation (FPCopy)

- (id)fp_copy;
- (void)fp_transformArgumentAtIndex:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)fp_sanitizeError;
- (void)fp_zeroOutReplyBlockArgumentsWithError:(id)arg1;

@end
