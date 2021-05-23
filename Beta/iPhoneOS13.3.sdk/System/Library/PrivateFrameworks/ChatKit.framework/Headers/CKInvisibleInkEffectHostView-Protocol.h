/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImage;

@protocol CKInvisibleInkEffectHostView

@property (nonatomic, readonly) Class invisibleInkEffectViewClass;
@property (nonatomic, readonly) UIImage *imageForInvisibleInkEffectView;

- (unsigned short)invisibleInkEffectViewWasUncovered;
- (unsigned short)attachInvisibleInkEffectView;
- (unsigned short)detachInvisibleInkEffectView;
- (unsigned short)invisibleInkEffectViewWasSuspended;
- (unsigned short)invisibleInkEffectViewWasResumed;

@end
