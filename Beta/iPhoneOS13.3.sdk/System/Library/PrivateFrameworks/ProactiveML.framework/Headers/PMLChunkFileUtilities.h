/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@interface PMLChunkFileUtilities : NSObject

+ (id)buildChunkFile:(id)arg1;
+ (void)writeChunkFile:(id)arg1 toPath:(id)arg2;
+ (id)readChunkFile:(id)arg1 withClass:(Class)arg2 context:(id)arg3;
+ (id)readChunkData:(id)arg1 withClass:(Class)arg2 context:(id)arg3;
+ (id)numberForInternedChunk:(id)arg1 addedToChunks:(id)arg2;

@end
