/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MDLMeshBufferDataAllocator : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2;
- (id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;
- (id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3;
- (id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)newZone:(unsigned long long)arg1;

@end
