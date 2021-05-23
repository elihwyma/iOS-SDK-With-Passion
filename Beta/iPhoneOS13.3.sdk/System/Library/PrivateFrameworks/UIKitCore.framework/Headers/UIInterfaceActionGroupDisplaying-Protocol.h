/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIInterfaceActionVisualStyle;

@protocol UIInterfaceActionVisualStyleProviding;

@protocol UIInterfaceActionGroupDisplaying <Swift>

@property (nonatomic, readonly) UIInterfaceActionVisualStyle *visualStyle;
@property (weak, nonatomic) id <UIInterfaceActionVisualStyleProviding> visualStyleProvider;

- (unsigned short)reloadVisualStyle;
- (unsigned short)defaultVisualStyleForTraitCollection:presentationStyle: /* Error: Ran out of types for this method. */;

@end
