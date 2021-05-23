/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIPanelBorderReplicatingView;

@interface UIPanelBorderView : UIView

{
    _Bool _observesTime;
    long long _statusBarAvoidance;
    UIPanelBorderReplicatingView *_replicatingView;
    NSString *_backdropGroupName;
}

@property (retain, nonatomic) UIPanelBorderReplicatingView *replicatingView;
@property (nonatomic) _Bool observesTime;
@property (retain, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long statusBarAvoidance;

- (void)layoutSubviews;
- (id)_cachedBackdropGroupName;

@end
