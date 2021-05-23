/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@class SBHSidebarVisualConfiguration, WGWidgetGroupViewController;

@protocol SBHSidebarProviderDelegate;

@protocol SBHSidebarProvider <Swift>

@property (retain, nonatomic) WGWidgetGroupViewController *widgetViewController;
@property (retain, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (nonatomic) unsigned long long layoutInsetsIgnoredEdges;
@property (weak, nonatomic) id <SBHSidebarProviderDelegate> delegate;

- (unsigned short)setEditingIcons: /* Error: Ran out of types for this method. */;

@end
