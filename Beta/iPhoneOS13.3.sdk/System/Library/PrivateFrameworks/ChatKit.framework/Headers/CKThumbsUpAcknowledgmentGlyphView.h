/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSimpleAcknowledgementGlyphView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface CKThumbsUpAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView

{
    CALayer *_animationLayer;
    CALayer *_contentLayer;
}

@property (retain, nonatomic) CALayer *animationLayer;
@property (retain, nonatomic) CALayer *contentLayer;

- (double)animationDuration;
- (void)setGlyphColor:(id)arg1;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)acknowledgmentType;

@end
