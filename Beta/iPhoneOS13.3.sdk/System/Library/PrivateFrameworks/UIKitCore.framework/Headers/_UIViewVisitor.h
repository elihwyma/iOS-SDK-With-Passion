/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewVisitor : NSObject

{
    _Bool _visitMaskViews;
    _Bool _tracksHierarchy;
    _Bool __currentlyVisitingHierarchy;
    unsigned long long _traversalDirection;
}

@property (nonatomic) _Bool tracksHierarchy;
@property (nonatomic) _Bool _currentlyVisitingHierarchy;
@property (nonatomic, readonly) unsigned long long traversalDirection;
@property (nonatomic) _Bool visitMaskViews;

+ (void)_addHierarchyTrackingVisitor:(id)arg1;
+ (void)_removeHierarchyTrackingVisitor:(id)arg1;
+ (void)_startTraversalOfVisitor:(id)arg1 withView:(id)arg2;

- (id)initWithTraversalDirection:(unsigned long long)arg1;
- (_Bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (_Bool)_visitView:(id)arg1;

@end
