/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIViewVisitor.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UITintColorVisitor : _UIViewVisitor

{
    unsigned long long _reasons;
    UIView *_originalVisitedView;
    UIView *_changedSubview;
}

- (id)initWithNotificationReasons:(unsigned long long)arg1;
- (id)initWithTraversalDirection:(unsigned long long)arg1;
- (_Bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (_Bool)_visitView:(id)arg1;

@end
