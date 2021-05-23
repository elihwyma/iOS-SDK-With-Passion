/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKUIBehaviorPhone.h>

__attribute__((visibility("hidden")))
@interface CKUIBehaviorHUDPhone : CKUIBehaviorPhone

- (id)theme;
- (struct UIEdgeInsets)entryViewHorizontalCoverInsets;
- (struct UIEdgeInsets)entryViewVerticalCoverInsets;
- (_Bool)entryFieldShouldUseBackdropView;
- (_Bool)usesActionMenu;
- (_Bool)joystickUsesWindow;

@end
