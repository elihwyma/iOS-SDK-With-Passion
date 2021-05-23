/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/Swift-Protocol.h>

@class UIBarButtonItem;

@protocol CNFRegFirstRunDelegate;

@protocol CNFRegFirstRunExperience <Swift>

@property (nonatomic) id <CNFRegFirstRunDelegate> delegate;
@property (nonatomic, readonly) long long currentAppearanceStyle;
@property (retain, nonatomic) UIBarButtonItem *customLeftButton;
@property (retain, nonatomic) UIBarButtonItem *customRightButton;

- (unsigned short)initWithRegController:account: /* Error: Ran out of types for this method. */;

@end
