/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UICellAccessoryManager;

__attribute__((visibility("hidden")))
@interface UITableCell : UIView

{
    _Bool _editing;
    UIView *_contentView;
    unsigned long long _accessoryTypes;
    UIView *_accessoryView;
    unsigned long long _editingAccessoryTypes;
    UIView *_editingAccessoryView;
    unsigned long long _editingStyle;
    NSString *_badgeText;
    UICellAccessoryManager *_accessoryManager;
}

@property (retain, nonatomic) UICellAccessoryManager *accessoryManager;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) _Bool editing;
@property (nonatomic) unsigned long long accessoryTypes;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) unsigned long long editingAccessoryTypes;
@property (retain, nonatomic) UIView *editingAccessoryView;
@property (nonatomic) unsigned long long editingStyle;
@property (copy, nonatomic) NSString *badgeText;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateAccessoryMetrics;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets)arg1;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets)arg1;
- (void)_updateAccessories;
- (id)_accessoriesForAccessoryTypes:(unsigned long long)arg1 view:(id)arg2 editing:(_Bool)arg3;
- (id)_accessoriesForEditingStyle:(unsigned long long)arg1;

@end
