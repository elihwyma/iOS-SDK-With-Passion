/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsLibrary.h>

@class MTLCompileOptions, NSArray;

@interface MTLDebugLibrary : MTLToolsLibrary

{
    unsigned long long _type;
    id _code;
    MTLCompileOptions *_compileOptions;
    NSArray *_imageFilterFunctions;
    CDStruct_dbc1e4aa *_imageFilterFunctionInfo;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id code;
@property (copy, nonatomic) MTLCompileOptions *compileOptions;
@property (nonatomic, readonly) NSArray *imageFilterFunctions;
@property (nonatomic, readonly) CDStruct_dbc1e4aa *imageFilterFunctionInfo;

- (void)dealloc;
- (id)newFunctionWithName:(id)arg1;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3 code:(id)arg4 options:(id)arg5;

@end
