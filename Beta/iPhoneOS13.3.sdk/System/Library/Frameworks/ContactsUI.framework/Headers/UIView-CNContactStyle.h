/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CNContactStyle;

@interface UIView (CNContactStyle)

@property (nonatomic, readonly) CNContactStyle *_cnui_contactStyle;

- (void)_cnui_applyContactStyle;
- (id)tintColorOverride;
- (void)abSetLayoutDebuggingColor:(id)arg1;

@end
