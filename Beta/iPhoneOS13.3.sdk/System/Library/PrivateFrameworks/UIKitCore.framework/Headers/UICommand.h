/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIMenuElement.h>

@class NSArray, NSString, UIImage;

@interface UICommand : UIMenuElement

{
    NSString *_discoverabilityTitle;
    SEL _action;
    id _propertyList;
    unsigned long long _attributes;
    long long _state;
    NSArray *_alternates;
    id __target;
}

@property (nonatomic, readonly) id _target;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;
@property (nonatomic, readonly) NSArray *alternates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4;
+ (id)_defaultCommands;
+ (id)_defaultCommandForAction:(SEL)arg1;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_identifier;
- (id)_immutableCopy;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (void)_performWithTarget:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(unsigned long long)arg7 state:(long long)arg8;
- (id)initWithCommand:(id)arg1;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (id)_leafAlternates;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (id)_alternateForModifierFlags:(long long)arg1;

@end
