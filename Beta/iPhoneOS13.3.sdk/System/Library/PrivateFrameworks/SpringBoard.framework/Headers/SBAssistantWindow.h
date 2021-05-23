/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWindow.h>

@class SBAssistantRootViewController;

@interface SBAssistantWindow : SBWindow

@property (nonatomic, readonly) SBAssistantRootViewController *assistantRootViewController;

+ (_Bool)_isSecure;
+ (id)defaultLayoutStrategy;
+ (_Bool)sb_autorotates;

- (void)dealloc;
- (_Bool)isOpaque;
- (_Bool)_canBecomeKeyWindow;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4;

@end
