/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSPointerArray, NSString, UIInterfaceAction, UIInterfaceActionVisualStyle;

@interface UIInterfaceActionGroup : NSObject <Swift>

{
    NSArray *_actions;
    UIInterfaceAction *_preferredAction;
    NSPointerArray *_weakDisplayPropertyObservers;
    NSString *_title;
    NSArray *_actionsBySection;
    UIInterfaceActionVisualStyle *_visualStyle;
    struct CGSize _leadingImageLayoutSize;
    struct CGSize _trailingImageLayoutSize;
}

@property (nonatomic, readonly) NSPointerArray *weakDisplayPropertyObservers;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *actionsBySection;
@property (nonatomic, readonly) struct CGSize leadingImageLayoutSize;
@property (nonatomic, readonly) struct CGSize trailingImageLayoutSize;
@property (retain, nonatomic, getter=_visualStyle, setter=_setVisualStyle:) UIInterfaceActionVisualStyle *visualStyle;
@property (nonatomic, readonly) NSArray *actions;
@property (retain, nonatomic) UIInterfaceAction *preferredAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)changedProperties:(id)arg1 containsAny:(id)arg2;
+ (id)actionGroupWithActions:(id)arg1;
+ (id)actionGroupWithActionsBySection:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_notifyObserversVisualStyleDidChange;
- (void)_notifyObserversDidChangeActionProperty:(id)arg1;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)setLeadingImageLayoutSize:(struct CGSize)arg1;
- (void)setTrailingImageLayoutSize:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 actionsBySection:(id)arg2;
- (void)_beginObservingActions;
- (void)_reloadImageLayoutSizesUsingExistingActionImages;
- (id)_deepCopyOfActionsBySection;
- (void)_updateActionImageLayoutSizes;
- (void)_performWithActionObservingDisabled:(CDUnknownBlockType)arg1;
- (void)_endObservingActions;
- (void)_addActionGroupDisplayPropertyObserver:(id)arg1;
- (void)_removeActionGroupDisplayPropertyObserver:(id)arg1;

@end
