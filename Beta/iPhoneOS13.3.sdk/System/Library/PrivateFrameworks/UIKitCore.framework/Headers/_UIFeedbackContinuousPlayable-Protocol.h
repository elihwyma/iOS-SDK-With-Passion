/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol _UIFeedbackContinuousPlayable <Swift>

@property (nonatomic) double duration;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

- (unsigned short)stop;

@end
