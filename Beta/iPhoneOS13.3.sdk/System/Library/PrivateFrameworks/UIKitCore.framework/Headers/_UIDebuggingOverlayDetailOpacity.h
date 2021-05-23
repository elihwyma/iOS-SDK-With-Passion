/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDebuggingOverlayDetail.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIDebuggingOverlayDetailOpacity : _UIDebuggingOverlayDetail

{
    UIView *_view;
    UIView *_inspectedView;
}

- (id)view;
- (void)_updateForInspectedView:(id)arg1;
- (void)_sliderValueChanged:(id)arg1;

@end
