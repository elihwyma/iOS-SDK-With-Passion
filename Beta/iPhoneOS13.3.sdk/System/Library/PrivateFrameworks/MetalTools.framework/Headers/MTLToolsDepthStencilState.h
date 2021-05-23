/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class NSString;

@protocol MTLDevice;

@interface MTLToolsDepthStencilState : MTLToolsObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) _Bool readsDepth;
@property (readonly) _Bool writesDepth;
@property (readonly) _Bool readsStencil;
@property (readonly) _Bool writesStencil;

- (void)dealloc;
- (void)acceptVisitor:(id)arg1;

@end
