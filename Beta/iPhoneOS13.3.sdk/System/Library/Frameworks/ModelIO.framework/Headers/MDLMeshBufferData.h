/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MDLMeshBufferZoneDefault, NSData, NSMutableData, NSString;

@protocol MDLMeshBufferAllocator, MDLMeshBufferZone;

@interface MDLMeshBufferData : NSObject

{
    MDLMeshBufferZoneDefault *_zone;
    MDLMeshBufferZoneDefault *_zoneDefault;
    NSMutableData *_data;
    unsigned long long _length;
    id <MDLMeshBufferAllocator> _allocator;
    unsigned long long _type;
    NSString *_name;
}

@property (retain, nonatomic, readonly) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long length;
@property (retain, nonatomic, readonly) id <MDLMeshBufferAllocator> allocator;
@property (retain, nonatomic, readonly) id <MDLMeshBufferZone> zone;
@property (nonatomic, readonly) unsigned long long type;

- (void)dealloc;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setName:(id)arg1;
- (id)map;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (id)initWithType:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)initWithLength:(unsigned long long)arg1 data:(id)arg2 allocator:(id)arg3 zone:(id)arg4;

@end
