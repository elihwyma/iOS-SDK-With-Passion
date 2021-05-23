/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSString, TXRTextureInfo;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, TXRBufferAllocator, TXRParser;

__attribute__((visibility("hidden")))
@interface TXRFileDataSourceProvider : NSObject

{
    id <TXRBufferAllocator> _bufferAllocator;
    NSObject<OS_dispatch_queue> *_fileIOQueue;
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    id <TXRParser> _parser;
    TXRTextureInfo *_textureInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)provideTextureInfo;
- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (unsigned long long)_determineFileType:(id)arg1;
- (id)initWithURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)_parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end
