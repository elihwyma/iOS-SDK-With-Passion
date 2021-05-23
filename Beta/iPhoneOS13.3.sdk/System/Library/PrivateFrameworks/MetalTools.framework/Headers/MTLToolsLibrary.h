/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class MTLToolsPointerArray, NSArray, NSString;

@protocol MTLDevice;

@interface MTLToolsLibrary : MTLToolsObject

{
    MTLToolsPointerArray *_functions;
}

@property (nonatomic, readonly) MTLToolsPointerArray *functions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) NSArray *functionNames;
@property (copy) NSString *overrideTriple;
@property (readonly) NSArray *externFunctionNames;

- (void)dealloc;
- (id)newFunctionWithName:(id)arg1;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;
- (id)newExternFunctionWithName:(id)arg1;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id *)arg4;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)acceptVisitor:(id)arg1;

@end
