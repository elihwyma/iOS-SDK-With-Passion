/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@interface MPSStateResourceList : NSObject

{
    struct ResourceListNode *_list;
}

+ (id)resourceList;
+ (id)resourceListWithTextureDescriptors:(id)arg1;
+ (id)resourceListWithBufferSizes:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)appendTexture:(id)arg1;
- (void)appendBuffer:(unsigned long long)arg1;
- (void)appendTexture:(id)arg1 format:(unsigned long long)arg2;

@end
