/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <AccessibilityUIService/AXUIAlert.h>

@protocol AXUIAlertStyleProvider;

@interface AXStyleProviderUIAlert : AXUIAlert

{
    double _dismissalGestureYOffset;
    struct CGPoint _backgroundViewDismissalOrigin;
    unsigned long long _alertType;
    id <AXUIAlertStyleProvider> _styleProvider;
}

@property (nonatomic) unsigned long long alertType;
@property (retain, nonatomic) id <AXUIAlertStyleProvider> styleProvider;

- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5 userInfo:(id)arg6;
- (void)addToContainerView:(id)arg1;
- (void)_appendParagraphWithText:(id)arg1 withTextColor:(id)arg2 font:(id)arg3 textAlignment:(long long)arg4 lineSpacing:(double)arg5 paragraphSpacingBefore:(double)arg6 toAttributedString:(id)arg7;
- (void)_updateDismissalWithPanGesture:(id)arg1;
- (void)_endDismissalWithPanGesture:(id)arg1;
- (void)_cancelDismissalWithPanGesture:(id)arg1;
- (void)_updateViewForDismissalPercentage:(double)arg1;

@end
