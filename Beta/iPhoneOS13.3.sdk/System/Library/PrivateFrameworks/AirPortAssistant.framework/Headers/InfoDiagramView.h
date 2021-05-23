/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <UIKit/UIView.h>

@class AUImageView, AULabel, NSString;

@interface InfoDiagramView : UIView

{
    AUImageView *broadbandImageView;
    AULabel *broadbandLabel;
    AULabel *internetLabel;
    AULabel *portLabel;
    AUImageView *wanConnectedBaseImageView;
    AULabel *wanConnectedBaseLabel;
    AUImageView *replacementBaseImageView;
    AULabel *replacementBaseLabel;
    AUImageView *insetImageView;
    UIView *fixedCablingFrameView;
    UIView *animatingCablingFrameView;
    unsigned int wanBaseProductID;
    unsigned int replacementProductID;
    long long sizeClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 wanConnectedBaseProductID:(unsigned int)arg2 replacementProductID:(unsigned int)arg3;
- (void)setWANConnectedBaseLabelString:(id)arg1;
- (void)startAnimatingCablingLayer;
- (struct CGPoint)swapArcLineStartPoint;
- (struct CGPoint)swapArcLineEndPoint;
- (struct CGPoint)internetPoint;
- (struct CGPoint)broadbandInPoint;
- (struct CGPoint)broadbandOutPoint;
- (struct CGPoint)wanConnectedBaseWANPoint;
- (struct CGPoint)swapArcControlPoint;
- (struct CGPoint)swapArcControlPoint1;
- (struct CGPoint)swapArcControlPoint2;
- (id)initWithFrame:(struct CGRect)arg1 wanConnectedBaseProductID:(unsigned int)arg2;
- (void)stopAnimatingCablingLayer;

@end
