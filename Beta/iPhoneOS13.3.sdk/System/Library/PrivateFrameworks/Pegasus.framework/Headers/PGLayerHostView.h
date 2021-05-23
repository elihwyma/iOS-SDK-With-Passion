/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <UIView.h>

@class BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle, _UIRemoteView;

__attribute__((visibility("hidden")))
@interface PGLayerHostView : UIView

{
    _UIRemoteView *_remoteView;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
}

@property (retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (nonatomic) struct CGAffineTransform layerHostTransform;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)_manageSharingOfTouchesBetweenClientAndHostContext;

@end
