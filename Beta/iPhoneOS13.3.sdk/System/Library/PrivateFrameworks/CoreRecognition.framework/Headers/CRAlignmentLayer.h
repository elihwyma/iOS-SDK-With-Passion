/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, CATextLayer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CRAlignmentLayer : CALayer

{
    CATextLayer *_instructionLayer;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_outlineLayer;
    CALayer *_infoLayer;
    NSMutableArray *_cardNumberLayers;
    CATextLayer *_cardholderNameLayer;
    CATextLayer *_expirationDateLayer;
    struct CGPoint _cardNumberHorizontalDefaultPos;
    struct CGRect _cardNumberHorizontalDefaultBounds;
}

@property (retain) CAShapeLayer *maskLayer;
@property (retain) CAShapeLayer *outlineLayer;
@property (retain) CALayer *infoLayer;
@property (retain) NSMutableArray *cardNumberLayers;
@property (nonatomic) struct CGPoint cardNumberHorizontalDefaultPos;
@property (nonatomic) struct CGRect cardNumberHorizontalDefaultBounds;
@property (retain) CATextLayer *cardholderNameLayer;
@property (retain) CATextLayer *expirationDateLayer;
@property (retain) CATextLayer *instructionLayer;

+ (id)layer;

- (id)init;
- (struct CGRect)alignmentRect;
- (void)layoutSublayers;
- (struct CGPoint)pointOnInfoLayerForPointOnCard:(struct CGPoint)arg1;
- (void)makeTextLayer:(id)arg1 matchWidthOfText:(id)arg2;
- (void)resetLayer;
- (void)fadePlacementImage;
- (void)animateFoundCodeParts:(id)arg1 codePartPositions:(id)arg2 codeFrameIndex:(unsigned long long)arg3 cardHolder:(id)arg4 cardholderPosition:(struct CGPoint)arg5 cardholderFrameIndex:(unsigned long long)arg6 expDate:(id)arg7 expdatePosition:(struct CGPoint)arg8 expDateFrameIndex:(unsigned long long)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)animateFoundCardRect:(id)arg1;
- (void)propogateMaskColor:(id)arg1 outlineColor:(id)arg2 placementTextColor:(id)arg3 capturedTextColor:(id)arg4;

@end
