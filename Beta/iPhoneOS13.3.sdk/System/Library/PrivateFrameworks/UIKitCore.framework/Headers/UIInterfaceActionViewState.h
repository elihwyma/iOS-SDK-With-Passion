/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceActionVisualStyleViewState.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIInterfaceAction;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionViewState : UIInterfaceActionVisualStyleViewState <Swift>

{
    _Bool _isHighlighted;
    _Bool _isPressed;
    _Bool _isFocused;
    _Bool _isPreferred;
    UIInterfaceAction *_action;
    id _actionViewStateContext;
    unsigned long long _visualCornerPosition;
}

@property (nonatomic, readonly) UIInterfaceAction *action;
@property (nonatomic, readonly) _Bool isHighlighted;
@property (nonatomic, readonly) _Bool isPressed;
@property (nonatomic, readonly) _Bool isFocused;
@property (nonatomic, readonly) _Bool isPreferred;
@property (nonatomic, readonly) id actionViewStateContext;
@property (nonatomic, readonly) unsigned long long visualCornerPosition;

+ (id)viewStateRepresentingDefaultAction;
+ (id)viewStateRepresentingPreferredAction;
+ (id)viewStateForActionRepresentationView:(id)arg1 action:(id)arg2;
+ (id)_nullViewStateForActionType:(long long)arg1;
+ (id)viewStateForActionRepresentationViewDescendantView:(id)arg1 action:(id)arg2;
+ (id)viewStateForAlertControllerActionView:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertiesFromActionRepresentationView:(id)arg1 groupView:(id)arg2 action:(id)arg3;
- (void)_collectStateForDefaultState;
- (void)_collectStateFromActionRepresentationView:(id)arg1;
- (void)_collectStateFromAction:(id)arg1;
- (void)_collectStateFromActionViewState:(id)arg1;
- (_Bool)_stateEqualToActionViewState:(id)arg1;

@end
