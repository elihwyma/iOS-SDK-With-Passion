/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <UIView.h>

@class AXUIAlertContext, NSDictionary;

@interface AXUIAlert : UIView

{
    AXUIAlertContext *_context;
    NSDictionary *_userInfo;
}

@property (weak, nonatomic) AXUIAlertContext *context;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)alertWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5 userInfo:(id)arg6;

- (void)addToContainerView:(id)arg1;

@end
