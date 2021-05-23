/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLResource;

@interface MPSState : NSObject

{
    struct MPSStateResource *_resources;
    unsigned long long _resourceCount;
    unsigned long long _readCount;
    NSString *_label;
    unsigned short _flags;
    _Bool _updatedAlready;
}

@property (nonatomic, readonly) unsigned long long resourceCount;
@property (nonatomic) unsigned long long readCount;
@property (nonatomic, readonly) _Bool isTemporary;
@property (copy) NSString *label;
@property (retain, nonatomic, readonly) id <MTLResource> resource;

+ (id)temporaryStateWithCommandBuffer:(id)arg1;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2;

- (void)dealloc;
- (id)debugDescription;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)initWithResource:(id)arg1;
- (unsigned long long)resourceSize;
- (id)initWithResources:(id)arg1;
- (id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1 textureDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2;
- (unsigned long long)resourceTypeAtIndex:(unsigned long long)arg1;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;
- (struct MPSStateTextureInfo)textureInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)bufferSizeAtIndex:(unsigned long long)arg1;
- (id)resourceAtIndex:(unsigned long long)arg1 allocateMemory:(_Bool)arg2;

@end
