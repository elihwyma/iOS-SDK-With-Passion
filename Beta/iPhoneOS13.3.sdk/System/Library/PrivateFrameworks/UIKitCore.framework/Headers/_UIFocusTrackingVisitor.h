/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIViewVisitor.h>

__attribute__((visibility("hidden")))
@interface _UIFocusTrackingVisitor : _UIViewVisitor

{
    _Bool _subviewAddedToHierarchy;
    unsigned long long _countOfFocusedAncestorTrackingViewsInSubtree;
}

- (_Bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (_Bool)_visitView:(id)arg1;

@end
