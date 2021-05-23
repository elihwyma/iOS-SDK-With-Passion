/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class IKAppTabBar, IKJSTabBarItem, NSArray, NSString;

@interface IKJSTabBar : IKJSObject <Swift>

{
    IKAppTabBar *_appTabBar;
    NSArray *_tabItems;
}

@property (retain) NSArray *tabItems;
@property (weak, nonatomic, readonly) IKAppTabBar *appTabBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *tabs;
@property (retain, nonatomic) IKJSTabBarItem *selectedTab;

- (id)initWithAppContext:(id)arg1 appTabBar:(id)arg2;
- (void)onSelect;
- (void)setTabs:(id)arg1;
- (void)_onSelectSync;
- (void)_setSelectedTabNavigationDocumentOnJSContext:(id)arg1;
- (id)asPrivateIKJSTabBar;
- (id)transientTab;

@end
