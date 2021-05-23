/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class XMattingBoxTensorFilter;

@protocol MattingFilter

@property CDStruct_79af1cb6 config;
@property (retain) XMattingBoxTensorFilter *boxTensorFilter;
@property (readonly) _Bool stateComputed;
@property (readonly) _Bool coefficientsComputed;

- (unsigned short)initWithDevice:library: /* Error: Ran out of types for this method. */;
- (unsigned short)allocateResources: /* Error: Ran out of types for this method. */;
- (unsigned short)releaseResources;
- (unsigned short)encodeApplyCoefficientsOn:colorGuide:disparityGuide:constraints:destinationAlphaTexture: /* Error: Ran out of types for this method. */;
- (unsigned short)encodeStateOn:colorGuide:disparityGuide:initialSegmentation:constraints: /* Error: Ran out of types for this method. */;
- (unsigned short)encodeStepOn: /* Error: Ran out of types for this method. */;
- (unsigned short)encodeUpsampleOn:segmentation:colorGuide:disparityGuide:outputMatte: /* Error: Ran out of types for this method. */;

@end
