/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@protocol FxHostResourcesAPI

- (unsigned short)allocateMemory:clear:clearWith:error: /* Error: Ran out of types for this method. */;
- (unsigned short)freeMemory:error: /* Error: Ran out of types for this method. */;
- (unsigned short)trackExternalAllocation: /* Error: Ran out of types for this method. */;
- (unsigned short)createTexture:withDOD:GLTarget:level:internalFormat:width:height:border:format:type:pixels:origin:pixelAspectRatio:andError: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteTexture:error: /* Error: Ran out of types for this method. */;
- (unsigned short)createPBuffer:withTarget:error: /* Error: Ran out of types for this method. */;
- (unsigned short)deletePBuffer:error: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfCores;
- (unsigned short)performSelector:onTarget:withObject:onThreads:waitUntilDone:error: /* Error: Ran out of types for this method. */;

@end
