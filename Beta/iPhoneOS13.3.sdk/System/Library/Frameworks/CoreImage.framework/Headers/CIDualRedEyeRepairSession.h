/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class CIContext, CIDualRedEyeRepairTuning, CIImage, CIRenderDestination, NSArray, NSDate, NSDictionary;

@protocol MTLCommandBuffer, MTLCommandQueue, MTLTexture;

@interface CIDualRedEyeRepairSession : NSObject

{
    struct __CVBuffer *_primary;
    struct __CVBuffer *_secondary;
    struct __CVBuffer *_output;
    CIContext *context;
    NSArray *observations;
    CIRenderDestination *destination;
    CIImage *primaryImage;
    CIImage *secondaryImage;
    NSDictionary *metadata;
    NSDictionary *imageProperties;
    NSArray *faces;
    CIDualRedEyeRepairTuning *tuning;
    NSDate *timestamp;
    NSDictionary *tuningParametersByPortType;
    id <MTLCommandQueue> commandQueue;
    id <MTLTexture> primaryTexture;
    id <MTLTexture> secondaryTexture;
    id <MTLTexture> outputTexture;
    id <MTLCommandBuffer> commandBuffer;
}

@property (retain, nonatomic) NSArray *observations;
@property (retain, nonatomic) CIRenderDestination *destination;
@property (retain, nonatomic) CIImage *primaryImage;
@property (retain, nonatomic) CIImage *secondaryImage;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSDictionary *imageProperties;
@property (retain, nonatomic) NSArray *faces;
@property (retain, nonatomic) CIDualRedEyeRepairTuning *tuning;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDictionary *tuningParametersByPortType;
@property (retain, nonatomic) id <MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) CIContext *context;
@property (retain, nonatomic) id <MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id <MTLTexture> primaryTexture;
@property (retain, nonatomic) id <MTLTexture> secondaryTexture;
@property (retain, nonatomic) id <MTLTexture> outputTexture;

+ (id)_contextRGBAh;

- (id)init;
- (void)dealloc;
- (void)cleanupState;
- (void)customizeRepairFilter:(id)arg1 forFace:(id)arg2;
- (_Bool)prepareRepair;
- (_Bool)renderUsingPixelBuffers;
- (_Bool)renderUsingProvidedCommandQueue;
- (_Bool)validateRenderState;
- (void)dumpInputs;
- (int)validateSetPrimary;
- (void)dumpObservation:(id)arg1 index:(int)arg2;
- (id)redEyeFaceFromObservation:(id)arg1 exifOrientation:(int)arg2;
- (_Bool)_repairPrimaryWithSecondary:(struct __CVBuffer *)arg1 to:(struct __CVBuffer *)arg2;
- (void)dumpSecondary;
- (int)validateRepair;
- (_Bool)repairFace:(id)arg1 filter:(id)arg2;
- (_Bool)prewarm;
- (_Bool)prepareRepairWithTuningParametersByPortType:(id)arg1;
- (_Bool)setPrimary:(struct __CVBuffer *)arg1 observations:(id)arg2 metadata:(id)arg3;
- (_Bool)repairPrimaryWithSecondary:(struct __CVBuffer *)arg1;

@end
