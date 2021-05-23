/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/Swift-Protocol.h>

@protocol SiriUITemplatedView;

@protocol SiriUITemplateView <Swift>

@property (weak, nonatomic) id <SiriUITemplatedView> templatedSuperview;

- (unsigned short)desiredHeight;
- (unsigned short)removeFromTemplatedSuperview;

@end
