/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWindow.h>

@interface SBSceneLayoutWindow : SBWindow

+ (_Bool)sb_autorotates;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_layoutController;
- (id)referenceCoordinateSpace;
- (id)layoutCoordinateSpace;

@end
