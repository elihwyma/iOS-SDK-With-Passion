/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIMenuElement.h>

@class NSString, UIImage;

@interface UIAction : UIMenuElement

{
    NSString *_discoverabilityTitle;
    NSString *_identifier;
    unsigned long long _attributes;
    long long _state;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(CDUnknownBlockType)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(id)arg1;
- (void)_performAction;
- (id)_immutableCopy;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (id)_spiRepresentation;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (void)_performWithTarget:(id)arg1;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 discoverabilityTitle:(id)arg4 attributes:(unsigned long long)arg5 state:(long long)arg6 handler:(CDUnknownBlockType)arg7;
- (id)_leafAlternates;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;

@end
