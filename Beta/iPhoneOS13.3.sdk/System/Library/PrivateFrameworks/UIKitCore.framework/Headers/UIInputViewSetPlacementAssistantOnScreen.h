/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewSetPlacement.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <Swift>

+ (_Bool)supportsSecureCoding;

- (_Bool)showsInputViews;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;
- (_Bool)inputViewWillAppear;
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (_Bool)accessoryViewWillAppear;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;

@end
