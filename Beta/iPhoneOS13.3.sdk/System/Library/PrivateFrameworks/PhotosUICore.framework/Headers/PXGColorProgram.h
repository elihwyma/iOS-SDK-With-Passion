/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer, MTLDevice, MTLTexture;

@interface PXGColorProgram : NSObject

{
    unsigned int _param_count;
    unsigned int _num_trc_luts;
    unsigned int *_trc_lut_widths;
    unsigned short _numInputs;
    unsigned int _opcodes;
    id <MTLDevice> _device;
    struct CGColorSpace *_sourceColorSpace;
    struct CGColorSpace *_destinationColorSpace;
    unsigned long long _flags;
    id <MTLBuffer> _params;
    id <MTLTexture> _TRCLUTs;
    id <MTLTexture> _colorCube;
}

@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) struct CGColorSpace *sourceColorSpace;
@property (nonatomic, readonly) struct CGColorSpace *destinationColorSpace;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) unsigned int opcodes;
@property (nonatomic, readonly) unsigned short numInputs;
@property (nonatomic, readonly) id <MTLBuffer> params;
@property (nonatomic, readonly) id <MTLTexture> TRCLUTs;
@property (nonatomic, readonly) id <MTLTexture> colorCube;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithDevice:(id)arg1 sourceColorSpace:(struct CGColorSpace *)arg2 destinationColorSpace:(struct CGColorSpace *)arg3 flags:(unsigned long long)arg4;
- (_Bool)_generateProgram;
- (_Bool)_compactProgramWithConversionInfo:(struct CGColorConversionInfo *)arg1 cubeSize:(int)arg2 cubeOnly:(_Bool)arg3;

@end
