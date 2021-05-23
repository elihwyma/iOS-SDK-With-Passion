/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBUIAnimationStepping <Swift>

@property (nonatomic, readonly, getter=isStepped) _Bool stepped;
@property (nonatomic) double stepPercentage;

- (unsigned short)finishSteppingForwardToEnd;
- (unsigned short)finishSteppingBackwardToStart;

@end
