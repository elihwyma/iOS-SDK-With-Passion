/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarLayoutBase : NSObject <Swift>

{
    _Bool _isLayoutValid;
    _Bool _layoutRTL;
    _Bool _hostedByNavigationBar;
    long long _barMetrics;
    struct CGSize _layoutSize;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) long long barMetrics;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic, getter=isLayoutRTL) _Bool layoutRTL;
@property (nonatomic, getter=isHostedByNavigationBar) _Bool hostedByNavigationBar;
@property (nonatomic) struct CGSize layoutSize;
@property (nonatomic, readonly, getter=isLayoutValid) _Bool layoutValid;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidateLayout;
- (void)updateLayout;
- (void)applyLayout;
- (void)updateLayoutIfNeeded;

@end
