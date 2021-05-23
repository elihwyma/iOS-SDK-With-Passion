/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@protocol MTLIndirectCommandBufferSPI <Swift>

@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long storageMode;
@property (nonatomic) unsigned long long resourceIndex;

- (unsigned short)getHeader:headerSize: /* Error: Ran out of types for this method. */;

@end
