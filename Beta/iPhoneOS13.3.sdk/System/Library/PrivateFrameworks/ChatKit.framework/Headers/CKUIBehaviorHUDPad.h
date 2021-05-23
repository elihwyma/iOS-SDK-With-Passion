/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKUIBehaviorPad.h>

__attribute__((visibility("hidden")))
@interface CKUIBehaviorHUDPad : CKUIBehaviorPad

- (id)theme;
- (struct UIEdgeInsets)entryViewHorizontalCoverInsets;
- (struct UIEdgeInsets)entryViewVerticalCoverInsets;
- (_Bool)entryFieldShouldUseBackdropView;
- (_Bool)usesActionMenu;
- (_Bool)joystickUsesWindow;

@end
