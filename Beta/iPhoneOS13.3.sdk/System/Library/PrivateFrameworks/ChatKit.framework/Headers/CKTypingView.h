/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CALayer, CKBaseLayer;

@protocol IMTypingIndicatorLayerProtocol;

@interface CKTypingView : UIView

{
    CALayer<IMTypingIndicatorLayerProtocol> *_indicatorLayer;
    CKBaseLayer *_baseLayer;
}

@property (retain, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;
@property (retain, nonatomic) CKBaseLayer *baseLayer;

- (id)initWithFrame:(struct CGRect)arg1;

@end
