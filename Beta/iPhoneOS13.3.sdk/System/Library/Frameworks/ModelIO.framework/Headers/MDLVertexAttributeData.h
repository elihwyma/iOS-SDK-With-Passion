/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject

{
    MDLMeshBufferMap *_map;
    void *_dataStart;
    unsigned long long _stride;
    unsigned long long _format;
    unsigned long long _bufferSize;
}

@property (retain, nonatomic) MDLMeshBufferMap *map;
@property (nonatomic) void *dataStart;
@property (nonatomic) unsigned long long stride;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long bufferSize;

- (id)init;
- (void)setbufferSize:(unsigned long long)arg1;

@end
