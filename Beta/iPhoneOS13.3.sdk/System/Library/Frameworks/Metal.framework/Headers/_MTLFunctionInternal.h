/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLFunction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MTLFunctionInternal : _MTLFunction

{
    struct MTLFunctionData _functionData;
    unsigned char _publicMetadataInitialized;
    unsigned char _privateMetadataInitialized;
    unsigned char _sourceArchiveMetadataInitialized;
    struct MTLProgramObject *_programObject;
    NSString *_filePath;
    long long _lineNumber;
}

- (void)dealloc;
- (id)arguments;
- (void)setArguments:(id)arg1;
- (long long)lineNumber;
- (id).cxx_construct;
- (id)returnType;
- (void)setFilePath:(id)arg1;
- (id)filePath;
- (void)setLineNumber:(long long)arg1;
- (unsigned long long)patchType;
- (long long)patchControlPointCount;
- (id)vertexAttributes;
- (id)stageInputAttributes;
- (id)functionConstantsDictionary;
- (_Bool)needsFunctionConstantValues;
- (id)functionConstants;
- (unsigned char)bitcodeType;
- (id)pluginData;
- (unsigned long long)bitCodeFileSize;
- (unsigned long long)bitCodeOffset;
- (const CDStruct_41a22ec7 *)bitCodeHash;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData *)arg3 functionData:(struct MTLFunctionData *)arg4 device:(id)arg5;
- (unsigned long long)sourceArchiveOffset;
- (void)setSourceArchiveOffset:(unsigned long long)arg1;
- (void)setReturnType:(id)arg1;
- (void)setFunctionConstants:(id)arg1;
- (void)setVertexAttributes:(id)arg1;
- (void)setUnpackedFilePath:(id)arg1;
- (id)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned int)arg2 constants:(id)arg3 functionCache:(id)arg4 options:(unsigned int)arg5 error:(id *)arg6;
- (void)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned int)arg2 constants:(id)arg3 functionCache:(id)arg4 options:(unsigned int)arg5 sync:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
- (id)unpackedFilePath;
- (unsigned long long)renderTargetArrayIndexType;
- (void)initializePublicMetadata;
- (void)initializePrivateMetadata;
- (void)initializeSourceArchive;
- (struct MTLProgramObject *)programObject;
- (const struct MTLFunctionData *)functionData;
- (void)setBitcodeType:(unsigned char)arg1;
- (void)setPluginData:(id)arg1;
- (void)setStageInputAttributes:(id)arg1;
- (id)functionInputs;

@end
