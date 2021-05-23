/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIColor, UIScrollView;

@protocol UITableConstantsTableProviding <Swift>

@property (nonatomic, readonly, getter=_scrollView) UIScrollView *scrollView;
@property (nonatomic, readonly, getter=_tableStyle) long long tableStyle;
@property (nonatomic, readonly, getter=_sectionContentInsetFollowsLayoutMargins) _Bool sectionContentInsetFollowsLayoutMargins;
@property (nonatomic, readonly, getter=_accessoryBaseColor) UIColor *accessoryBaseColor;
@property (nonatomic, readonly, getter=_multiselectCheckmarkColor) UIColor *multiselectCheckmarkColor;

@end
