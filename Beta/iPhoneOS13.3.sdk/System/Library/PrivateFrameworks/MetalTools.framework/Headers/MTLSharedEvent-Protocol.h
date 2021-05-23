/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@protocol MTLSharedEvent <Swift>

@property unsigned long long signaledValue;

- (unsigned short)notifyListener:atValue:block: /* Error: Ran out of types for this method. */;
- (unsigned short)newSharedEventHandle;

@end
