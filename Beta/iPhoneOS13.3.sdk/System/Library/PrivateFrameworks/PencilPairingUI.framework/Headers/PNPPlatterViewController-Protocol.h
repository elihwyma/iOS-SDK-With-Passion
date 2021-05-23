/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

@protocol PNPPlatterViewControllerPlatterDelegate;

@protocol PNPPlatterViewController

@property (nonatomic, readonly) unsigned long long preferredEdge;
@property (weak, nonatomic) id <PNPPlatterViewControllerPlatterDelegate> platterDelegate;
@property (nonatomic, readonly) double preferredCornerRadius;

@end
