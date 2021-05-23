/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLDevice;

@interface MPSExternalPluginBase : NSObject

{
    MPSExternalPluginBase *_self;
    id <MTLDevice> _device;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (unsigned long long)maxBatchSize;

@end
