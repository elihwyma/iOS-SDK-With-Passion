/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@protocol MTLIndirectRenderCommandSPI <Swift>

- (unsigned short)getVertexBufferAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)getFragmentBufferAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)getCommandType;
- (unsigned short)drawArguments;
- (unsigned short)drawIndexedArguments;
- (unsigned short)drawPatchesArguments;
- (unsigned short)drawIndexedPatchesArguments;
- (unsigned short)getTessellationFactorArguments;
- (unsigned short)getPipelineStateUniqueIdentifier;

@end
