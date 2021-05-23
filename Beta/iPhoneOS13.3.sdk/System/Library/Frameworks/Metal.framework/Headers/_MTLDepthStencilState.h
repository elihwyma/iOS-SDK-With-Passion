/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLDevice;

@interface _MTLDepthStencilState : NSObject

{
    id <MTLDevice> _device;
    NSString *_label;
}

@property (readonly) id <MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) _Bool readsDepth;
@property (readonly) _Bool writesDepth;
@property (readonly) _Bool readsStencil;
@property (readonly) _Bool writesStencil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 depthStencilDescriptor:(id)arg2;

@end
