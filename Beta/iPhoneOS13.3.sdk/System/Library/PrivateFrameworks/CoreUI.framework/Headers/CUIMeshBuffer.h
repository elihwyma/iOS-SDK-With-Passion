/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString;

@protocol MDLMeshBufferAllocator, MDLMeshBufferZone;

__attribute__((visibility("hidden")))
@interface CUIMeshBuffer : NSObject

{
    NSMutableData *_data;
    unsigned long long _type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long length;
@property (retain, nonatomic, readonly) id <MDLMeshBufferAllocator> allocator;
@property (retain, nonatomic, readonly) id <MDLMeshBufferZone> zone;
@property (nonatomic, readonly) unsigned long long type;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)map;
- (id)initWithBytes:(void *)arg1 andLength:(unsigned long long)arg2 ofType:(unsigned long long)arg3;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;

@end
