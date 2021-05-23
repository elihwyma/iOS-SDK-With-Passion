/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLObjectWithLabel.h>

@class MTLType, NSArray, NSData, NSDictionary, NSObject, NSString;

@protocol MTLDevice, OS_dispatch_data;

@interface _MTLFunction : _MTLObjectWithLabel

{
    id <MTLDevice> _device;
    unsigned long long _functionType;
    NSString *_name;
    struct MTLLibraryData *_libraryData;
    id _vendorPrivate;
    NSArray *_vertexAttributes;
    NSArray *_functionConstants;
    NSDictionary *_functionConstantDictionary;
    MTLType *_returnType;
    NSArray *_arguments;
    NSString *_unpackedFilePath;
}

@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) struct MTLLibraryData *libraryData;
@property (copy) NSString *filePath;
@property long long lineNumber;
@property (copy) NSString *unpackedFilePath;
@property (nonatomic) unsigned char bitcodeType;
@property NSData *pluginData;
@property (readonly) id vendorPrivate;
@property (readonly) unsigned long long bitCodeOffset;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property NSArray *vertexAttributes;
@property MTLType *returnType;
@property NSArray *arguments;
@property NSArray *functionConstants;
@property (readonly) NSObject<OS_dispatch_data> *functionInputs;
@property (readonly) _Bool needsFunctionConstantValues;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long patchType;
@property (readonly) long long patchControlPointCount;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) NSDictionary *functionConstantsDictionary;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (unsigned int)functionRef;
- (unsigned long long)bitCodeFileSize;
- (const CDStruct_41a22ec7 *)bitCodeHash;
- (id)reflectionWithOptions:(unsigned long long)arg1;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)bitcodeData;
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData *)arg3 device:(id)arg4;
- (void)setVendorPrivate:(id)arg1;

@end
