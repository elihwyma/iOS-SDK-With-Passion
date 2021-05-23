/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIColor, UIScreen, UITraitCollection;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionVisualStyleViewState : NSObject <Swift>

{
    UITraitCollection *_traitCollection;
    UIScreen *_screen;
    UIColor *_tintColor;
}

@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) UIColor *tintColor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithScreen:(id)arg1;
- (id)copyWithTraitCollection:(id)arg1;
- (id)initWithPropertiesFromTopLevelView:(id)arg1;
- (void)_collectStateFromView:(id)arg1;
- (void)_collectStateFromScreen:(id)arg1;
- (void)_collectStateFromVisualStyleViewState:(id)arg1;
- (_Bool)_stateEqualToVisualStyleViewState:(id)arg1;

@end
