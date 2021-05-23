/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, UIBarButtonItem, _UIButtonGroupViewController;

@protocol _UIBarButtonItemGroupOwner;

@interface UIBarButtonItemGroup : NSObject <Swift>

{
    NSMutableArray *_barButtonItems;
    _Bool _locked;
    _Bool _sendActionsBeforeDismiss;
    _Bool _hidden;
    float _priority;
    UIBarButtonItem *_representativeItem;
    id <_UIBarButtonItemGroupOwner> _owner;
    _UIButtonGroupViewController *_representativeUI;
    double _minimumLeadingSpace;
    double _minimumTrailingSpace;
    unsigned long long _expandStyle;
}

@property (nonatomic, getter=_priority, setter=_setPriority:) float priority;
@property (nonatomic, readonly, getter=_items) NSArray *items;
@property (weak, nonatomic, getter=_owner, setter=_setOwner:) id <_UIBarButtonItemGroupOwner> owner;
@property (retain, nonatomic, getter=_representativeUI, setter=_setRepresentativeUI:) _UIButtonGroupViewController *representativeUI;
@property (nonatomic, getter=_isLocked, setter=_setLocked:) _Bool locked;
@property (nonatomic, getter=_sendActionsBeforeDismiss, setter=_setSendActionsBeforeDismiss:) _Bool sendActionsBeforeDismiss;
@property (nonatomic, getter=_isHidden, setter=_setHidden:) _Bool hidden;
@property (nonatomic, getter=_minimumLeadingSpace, setter=_setMinimumLeadingSpace:) double minimumLeadingSpace;
@property (nonatomic, getter=_minimumTrailingSpace, setter=_setMinimumTrailingSpace:) double minimumTrailingSpace;
@property (nonatomic, getter=_expandStyle, setter=_setExpandStyle:) unsigned long long expandStyle;
@property (copy, nonatomic) NSArray *barButtonItems;
@property (retain, nonatomic) UIBarButtonItem *representativeItem;
@property (nonatomic, readonly, getter=isDisplayingRepresentativeItem) _Bool displayingRepresentativeItem;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_validateAllItems;
- (id)initWithBarButtonItems:(id)arg1 representativeItem:(id)arg2;
- (void)_removeBarButtonItem:(id)arg1;
- (void)_removeRepresentative:(id)arg1;

@end
