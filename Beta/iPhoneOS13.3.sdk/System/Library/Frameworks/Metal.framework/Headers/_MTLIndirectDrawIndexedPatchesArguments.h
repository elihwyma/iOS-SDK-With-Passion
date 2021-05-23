/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface _MTLIndirectDrawIndexedPatchesArguments : NSObject

{
    unsigned long long _numberOfPatchControlPoints;
    unsigned long long _patchStart;
    unsigned long long _patchCount;
    void *_patchIndexBufferVirtualAddress;
    unsigned long long _patchIndexBufferOffset;
    void *_controlPointIndexBufferVirtualAddress;
    unsigned long long _controlPointIndexBufferOffset;
    unsigned long long _instanceCount;
    unsigned long long _baseInstance;
}

@property (nonatomic) unsigned long long numberOfPatchControlPoints;
@property (nonatomic) unsigned long long patchStart;
@property (nonatomic) unsigned long long patchCount;
@property (nonatomic) void *patchIndexBufferVirtualAddress;
@property (nonatomic) void *controlPointIndexBufferVirtualAddress;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long baseInstance;

@end
