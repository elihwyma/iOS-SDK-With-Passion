/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class FBSDisplayIdentity, SBLayoutState;

@protocol SBDisplayLayoutContext <Swift>

@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly) SBLayoutState *layoutState;

@end
