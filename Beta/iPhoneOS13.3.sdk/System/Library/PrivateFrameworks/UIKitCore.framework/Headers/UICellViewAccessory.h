/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICellAccessory.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UICellViewAccessory : UICellAccessory

{
    long long _options;
}

@property (nonatomic) long long options;
@property (retain, nonatomic) UIView *view;

+ (id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)requestsHuggingLayoutWidth;
- (_Bool)alwaysNeedsLayout;

@end
