/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@interface MDLMeshBufferMap : NSObject

{
    CDUnknownBlockType _deallocator;
    void *_bytes;
}

@property (nonatomic, readonly) void *bytes;

- (void)dealloc;
- (id)initWithBytes:(void *)arg1 deallocator:(CDUnknownBlockType)arg2;

@end
