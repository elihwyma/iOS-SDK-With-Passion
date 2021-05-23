/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, UICellAccessoryConfiguration, UIView;

@protocol UICellAccessoryLayout;

__attribute__((visibility("hidden")))
@interface UICellAccessoryManager : NSObject

{
    struct CGSize _enforcedContainerSize;
    _Bool _needsLayout;
    double _minimumCompressionLayoutWidth;
    id <UICellAccessoryLayout> _leadingLayout;
    id <UICellAccessoryLayout> _trailingLayout;
    NSDictionary *_configurations;
    NSString *_currentConfigurationIdentifier;
    UIView *_containerView;
    UICellAccessoryConfiguration *_previousConfiguration;
    NSMutableDictionary *_accessoryViews;
    struct CGSize _previousContainerSize;
    struct UIEdgeInsets _safeAreaInsets;
    struct UIEdgeInsets _contentInset;
}

@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) _Bool needsLayout;
@property (nonatomic) struct CGSize previousContainerSize;
@property (retain, nonatomic) UICellAccessoryConfiguration *previousConfiguration;
@property (retain, nonatomic) NSMutableDictionary *accessoryViews;
@property (nonatomic) struct UIEdgeInsets safeAreaInsets;
@property (nonatomic) double minimumCompressionLayoutWidth;
@property (retain, nonatomic) id <UICellAccessoryLayout> leadingLayout;
@property (retain, nonatomic) id <UICellAccessoryLayout> trailingLayout;
@property (retain, nonatomic) NSDictionary *configurations;
@property (copy, nonatomic) NSString *currentConfigurationIdentifier;
@property (nonatomic, readonly) UICellAccessoryConfiguration *currentConfiguration;
@property (nonatomic, readonly) struct CGSize containerSize;
@property (nonatomic, readonly) struct CGRect contentFrame;
@property (nonatomic, readonly) struct UIEdgeInsets contentInset;

- (id)description;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (id)initWithContainerView:(id)arg1;
- (void)updateContainerView:(id)arg1;
- (void)performWithEnforcedContainerSize:(struct CGSize)arg1 block:(CDUnknownBlockType)arg2;
- (id)_configurationWithIdentifier:(id)arg1;
- (struct CGRect)_updateAccessories:(id)arg1 previousAccessories:(id)arg2 withLayout:(id)arg3 edge:(unsigned long long)arg4;
- (struct CGRect)containerBounds;
- (void)_updateFromPreviousConfiguration:(id)arg1;

@end
