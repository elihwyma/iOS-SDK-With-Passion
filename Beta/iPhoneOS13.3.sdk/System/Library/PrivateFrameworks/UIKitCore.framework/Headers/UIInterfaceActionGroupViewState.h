/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceActionVisualStyleViewState.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <Swift>

{
    _Bool _isVerticalLayoutAxis;
    long long _resolvedPresentationStyle;
}

@property (nonatomic, readonly) _Bool isVerticalLayoutAxis;
@property (nonatomic, readonly) long long resolvedPresentationStyle;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_collectStateFromGroupViewState:(id)arg1;
- (_Bool)_stateEqualToGroupViewState:(id)arg1;
- (id)copyWithVerticalLayoutAxis:(_Bool)arg1;
- (id)copyWithResolvedPresentationStyle:(long long)arg1;

@end
