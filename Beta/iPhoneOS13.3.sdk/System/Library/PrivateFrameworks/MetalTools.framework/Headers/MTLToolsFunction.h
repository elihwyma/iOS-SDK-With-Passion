/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class MTLToolsPointerArray, MTLType, NSArray, NSDictionary, NSString;

@protocol MTLDevice;

@interface MTLToolsFunction : MTLToolsObject

{
    MTLToolsPointerArray *_functions;
    MTLToolsPointerArray *_indirectArgumentEncoders;
    MTLToolsPointerArray *_argumentEncoders;
}

@property (nonatomic, readonly) MTLToolsPointerArray *indirectArgumentEncoders;
@property (nonatomic, readonly) MTLToolsPointerArray *argumentEncoders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long patchType;
@property (readonly) long long patchControlPointCount;
@property (readonly) NSArray *vertexAttributes;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (copy, readonly) NSString *filePath;
@property (readonly) long long lineNumber;
@property (copy, readonly) NSString *unpackedFilePath;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property (readonly) MTLType *returnType;
@property (readonly) NSArray *arguments;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (const CDStruct_5af0f983 *)bitCodeHash;
- (id)reflectionWithOptions:(unsigned long long)arg1;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)bitcodeData;
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 functions:(id)arg3;

@end
