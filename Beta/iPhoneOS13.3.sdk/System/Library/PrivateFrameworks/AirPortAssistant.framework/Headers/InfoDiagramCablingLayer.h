/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <QuartzCore/CALayer.h>

@class CAGradientLayer, CAShapeLayer, NSString;

@protocol InfoDiagramCablingAnchorDelegate;

@interface InfoDiagramCablingLayer : CALayer

{
    id <InfoDiagramCablingAnchorDelegate> diagramAnchorPointDelegate;
    _Bool swapCabling;
    _Bool isCompactWidth;
    CAShapeLayer *internetInnerLineLayer;
    CAShapeLayer *internetOuterLineLayer;
    CAGradientLayer *internetGradientLayer;
    CAShapeLayer *broadbandToWANInnerLineLayer;
    CAShapeLayer *broadbandToWANOuterLineLayer;
    CAShapeLayer *swapArcLineLayer;
    CAShapeLayer *swapArcArrowLayer;
}

@property (nonatomic) id <InfoDiagramCablingAnchorDelegate> diagramAnchorPointDelegate;
@property (nonatomic) _Bool swapCabling;
@property (nonatomic) _Bool isCompactWidth;
@property (retain, nonatomic) CAShapeLayer *internetInnerLineLayer;
@property (retain, nonatomic) CAShapeLayer *internetOuterLineLayer;
@property (retain, nonatomic) CAGradientLayer *internetGradientLayer;
@property (retain, nonatomic) CAShapeLayer *broadbandToWANInnerLineLayer;
@property (retain, nonatomic) CAShapeLayer *broadbandToWANOuterLineLayer;
@property (retain, nonatomic) CAShapeLayer *swapArcLineLayer;
@property (retain, nonatomic) CAShapeLayer *swapArcArrowLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)commonInit;
- (void)layoutSublayers;
- (id)initNoWANLinkFirstFrame;
- (id)initNoWANLinkLastFrame;
- (void)createPathForSublayer:(id)arg1;

@end
