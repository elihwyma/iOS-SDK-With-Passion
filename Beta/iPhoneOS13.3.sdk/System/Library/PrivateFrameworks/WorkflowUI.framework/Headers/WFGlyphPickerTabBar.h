/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, UITabBar;

@protocol WFGlyphPickerTabBarDelegate;

@interface WFGlyphPickerTabBar : UIView

{
    unsigned long long _selectedTabIndex;
    id <WFGlyphPickerTabBarDelegate> _delegate;
    UITabBar *_tabBar;
}

@property (weak, nonatomic) UITabBar *tabBar;
@property (nonatomic) unsigned long long selectedTabIndex;
@property (weak, nonatomic) id <WFGlyphPickerTabBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (id)initWithTabNames:(id)arg1 tabCharacters:(id)arg2;

@end
