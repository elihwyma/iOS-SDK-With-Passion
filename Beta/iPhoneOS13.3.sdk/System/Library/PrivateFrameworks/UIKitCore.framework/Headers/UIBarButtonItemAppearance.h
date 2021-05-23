/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIBarButtonItemStateAppearance, _UIBarButtonItemData;

@protocol _UIBarButtonItemAppearanceChangeObserver, _UIBarButtonItemDataFallback;

@interface UIBarButtonItemAppearance : NSObject <Swift>

{
    id <_UIBarButtonItemAppearanceChangeObserver> _changeObserver;
    _UIBarButtonItemData *_data;
    UIBarButtonItemStateAppearance *_states[4];
}

@property (nonatomic, readonly) _UIBarButtonItemData *_data;
@property (weak, nonatomic, setter=_setChangeObserver:) id <_UIBarButtonItemAppearanceChangeObserver> _changeObserver;
@property (retain, nonatomic, setter=_setFallback:) id <_UIBarButtonItemDataFallback> _fallback;
@property (nonatomic, readonly) UIBarButtonItemStateAppearance *normal;
@property (nonatomic, readonly) UIBarButtonItemStateAppearance *highlighted;
@property (nonatomic, readonly) UIBarButtonItemStateAppearance *disabled;
@property (nonatomic, readonly) UIBarButtonItemStateAppearance *focused;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)_describeInto:(id)arg1;
- (void)_writeToStorage:(CDUnknownBlockType)arg1;
- (void)_setData:(id)arg1;
- (id)_proxyForState:(long long)arg1;
- (void)configureWithDefaultForStyle:(long long)arg1;
- (id)initWithBarButtonItemAppearance:(id)arg1;
- (void)_updateDataTo:(id)arg1 signal:(_Bool)arg2;
- (void)_updateToSupportBackIndicatorsCopyingIndicatorsAndFallbackFrom:(id)arg1;
- (void)_setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2;
- (void)_resetBackIndicatorImages;

@end
