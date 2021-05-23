/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UITraitCollection, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectEnvironment : NSObject <Swift>

{
    _Bool _allowsDithering;
    _Bool _allowsBlurring;
    _Bool _useSimpleVibrancy;
    _Bool _reducedTransperancy;
    UIVisualEffectView *_effectView;
    UITraitCollection *_traitCollection;
}

@property (nonatomic, readonly) UIVisualEffectView *effectView;
@property (nonatomic) _Bool allowsDithering;
@property (nonatomic) _Bool allowsBlurring;
@property (nonatomic) _Bool useSimpleVibrancy;
@property (nonatomic) _Bool reducedTransperancy;
@property (copy, nonatomic) UITraitCollection *traitCollection;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHost:(id)arg1;

@end
