/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLResourceAllocationInfo.h>

@class NSString;

@interface MTLIOAccelResourceAllocation : MTLResourceAllocationInfo

{
    NSString *_memoryPool;
    unsigned long long _virtualSize;
    unsigned long long _residentSize;
    unsigned long long _dirtySize;
    _Bool _purgeable;
    unsigned long long _uniqueIdentifier;
}

- (void)dealloc;
- (unsigned long long)uniqueIdentifier;
- (_Bool)purgeable;
- (id)memoryPool;
- (id)initWithPool:(id)arg1 virtualSize:(unsigned long long)arg2 residentSize:(unsigned long long)arg3 dirtySize:(unsigned long long)arg4 purgeable:(_Bool)arg5 uniqueID:(unsigned long long)arg6;
- (unsigned long long)virtualSize;
- (unsigned long long)residentSize;
- (unsigned long long)dirtySize;

@end
