/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface CKTransientReplicaButtonContainer : UIView

{
    UIView *_sendButtonCircle;
    UIView *_cancelButtonCircle;
    CALayer *_sendButtonGlyphLayer;
    CALayer *_cancelButtonGlyphLayer;
}

@property (nonatomic, readonly) UIView *sendButtonCircle;
@property (nonatomic, readonly) UIView *cancelButtonCircle;
@property (nonatomic, readonly) CALayer *sendButtonGlyphLayer;
@property (nonatomic, readonly) CALayer *cancelButtonGlyphLayer;

- (id)initWithFrame:(struct CGRect)arg1 hasDarkVibrancy:(_Bool)arg2 color:(BOOL)arg3;
- (id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1;

@end
