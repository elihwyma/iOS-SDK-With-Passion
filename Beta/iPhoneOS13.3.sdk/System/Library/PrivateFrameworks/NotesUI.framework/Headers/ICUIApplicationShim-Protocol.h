/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/Swift-Protocol.h>

@class UIWindow;

@protocol ICUIApplicationShim <Swift>

@property (nonatomic, readonly) UIWindow *keyWindow;

- (unsigned short)beginReceivingRemoteControlEvents;
- (unsigned short)endReceivingRemoteControlEvents;

@end
