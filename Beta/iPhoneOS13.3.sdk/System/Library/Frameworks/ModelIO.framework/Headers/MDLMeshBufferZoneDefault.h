/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MDLMeshBufferAllocator;

@interface MDLMeshBufferZoneDefault : NSObject

{
    unsigned long long _usedCapacity;
    unsigned long long _capacity;
    id <MDLMeshBufferAllocator> _allocator;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (retain, nonatomic, readonly) id <MDLMeshBufferAllocator> allocator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;
- (_Bool)reserveMemory:(unsigned long long)arg1 allocator:(id)arg2;
- (void)cancelMemory:(unsigned long long)arg1;

@end
