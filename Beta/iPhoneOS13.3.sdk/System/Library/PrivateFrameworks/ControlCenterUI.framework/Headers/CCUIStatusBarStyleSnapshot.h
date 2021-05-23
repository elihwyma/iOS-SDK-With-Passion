/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

#import <ControlCenterUI/Swift-Protocol.h>

@class UIStatusBarStyleRequest, _UIStatusBarData;

@interface CCUIStatusBarStyleSnapshot : NSObject <Swift>

{
    _Bool _hidden;
    UIStatusBarStyleRequest *_leadingStyleRequest;
    UIStatusBarStyleRequest *_trailingStyleRequest;
    _UIStatusBarData *_leadingOverlayData;
    struct CGRect _avoidanceFrame;
    struct UIEdgeInsets _statusBarInsets;
}

@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (copy, nonatomic, readonly) UIStatusBarStyleRequest *leadingStyleRequest;
@property (copy, nonatomic, readonly) UIStatusBarStyleRequest *trailingStyleRequest;
@property (nonatomic, readonly) struct CGRect avoidanceFrame;
@property (nonatomic, readonly) struct UIEdgeInsets statusBarInsets;
@property (copy, nonatomic, readonly) _UIStatusBarData *leadingOverlayData;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHidden:(_Bool)arg1 leadingStyleRequest:(id)arg2 trailingStyleRequest:(id)arg3 statusBarInsets:(struct UIEdgeInsets)arg4 avoidanceFrame:(struct CGRect)arg5 leadingOverlayData:(id)arg6;

@end
