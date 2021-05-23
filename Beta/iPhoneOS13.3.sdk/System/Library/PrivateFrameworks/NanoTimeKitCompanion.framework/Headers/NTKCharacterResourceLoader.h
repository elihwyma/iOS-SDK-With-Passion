/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, CLKUIMmapFile, NSBundle, NSMutableArray, NSMutableDictionary;

@protocol MTLBuffer, MTLDevice, MTLRenderPipelineState;

@interface NTKCharacterResourceLoader : NSObject

{
    CLKDevice *_clkDevice;
    NSBundle *_bundle;
    id <MTLDevice> _mtlDevice;
    unsigned long long _clients;
    CLKUIMmapFile *_commonBankLatn;
    CLKUIMmapFile *_commonBankArab;
    CLKUIMmapFile *_commonBankDeva;
    CLKUIMmapFile *_minnieBank;
    CLKUIMmapFile *_mickeyBank;
    id <MTLRenderPipelineState> _renderPipelines[4];
    unsigned long long _viewMtlPixelFormat;
    NSMutableDictionary *_mapping;
    NSMutableArray *_array;
    NSMutableArray *_arrayByLocale[3];
    id <MTLBuffer> _mtlBuffer;
    unsigned long long _bufferOffsetBackground;
    unsigned long long _bufferOffsetBody;
    unsigned long long _bufferOffsetFoot;
    unsigned long long _bufferOffsetArm;
    unsigned long long _bufferOffsetHand;
    unsigned long long _bufferOffsetHead;
    unsigned long long _bufferOffsetSkirt;
    unsigned long long _bufferOffsetFlower;
}

@property (nonatomic, readonly) id <MTLBuffer> mtlBuffer;
@property (nonatomic, readonly) unsigned long long bufferOffsetBackground;
@property (nonatomic, readonly) unsigned long long bufferOffsetBody;
@property (nonatomic, readonly) unsigned long long bufferOffsetFoot;
@property (nonatomic, readonly) unsigned long long bufferOffsetArm;
@property (nonatomic, readonly) unsigned long long bufferOffsetHand;
@property (nonatomic, readonly) unsigned long long bufferOffsetHead;
@property (nonatomic, readonly) unsigned long long bufferOffsetSkirt;
@property (nonatomic, readonly) unsigned long long bufferOffsetFlower;

+ (void)_deallocInstanceForDevice:(id)arg1;
+ (id)sharedInstanceForDevice:(id)arg1 withPixelFormat:(unsigned long long)arg2;

- (void)dealloc;
- (void)localeChanged;
- (void)prime;
- (void)_asyncDeallocInstance;
- (id)getPipelineForProgramType:(unsigned long long)arg1;
- (id)mtlTextureWithName:(id)arg1;
- (id)textureWithName:(id)arg1 prefix:(id)arg2;
- (id)textureWithName:(id)arg1;
- (id)getMTLTexture:(id)arg1;
- (id)initForDevice:(id)arg1 withPixelFormat:(unsigned long long)arg2;
- (void)_loadMTLBufferData;
- (void)_loadPrograms;
- (void)_loadTextures;
- (void)_setupPipelineForType:(unsigned long long)arg1 vertex:(id)arg2 fragment:(id)arg3 blending:(_Bool)arg4 inLibrary:(id)arg5 librarySPI:(id)arg6;
- (id)_loadBank:(id)arg1 toArrays:(unsigned long long)arg2 allowNewKeys:(_Bool)arg3;
- (void)addClient;
- (void)removeClient;
- (id)mtlTextureWithName:(id)arg1 prefix:(id)arg2;

@end
