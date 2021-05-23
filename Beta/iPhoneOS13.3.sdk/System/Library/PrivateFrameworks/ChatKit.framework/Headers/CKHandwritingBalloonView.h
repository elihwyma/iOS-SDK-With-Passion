/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptPluginBalloonView.h>

@interface CKHandwritingBalloonView : CKTranscriptPluginBalloonView

- (struct CKBalloonDescriptor_t)balloonDescriptor;
- (struct CGRect)maskFrame;
- (_Bool)shouldMaskWhenOpaque;

@end
