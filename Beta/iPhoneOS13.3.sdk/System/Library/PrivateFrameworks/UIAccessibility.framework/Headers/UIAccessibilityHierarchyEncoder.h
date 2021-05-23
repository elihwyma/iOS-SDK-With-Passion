/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <Foundation/NSObject.h>

@class UIAccessibilityElementTraversalOptions;

@interface UIAccessibilityHierarchyEncoder : NSObject

{
    _Bool _shouldResolveRemoteElements;
    id _rootElement;
    UIAccessibilityElementTraversalOptions *_traversalOptions;
}

@property (retain, nonatomic) id rootElement;
@property (retain, nonatomic) UIAccessibilityElementTraversalOptions *traversalOptions;
@property (nonatomic) _Bool shouldResolveRemoteElements;

- (void)_resolveLeafElementsForRemoteElement:(id)arg1 rootElement:(id)arg2 addingToLeafElementDescriptions:(id)arg3;
- (struct CGRect)_convertAccessibilityFrameOfElement:(id)arg1 toViewSpaceOfContainer:(id)arg2 remoteParent:(id)arg3;
- (id)initWithRootElement:(id)arg1 traversalOptions:(id)arg2;
- (id)encodeWithError:(id *)arg1;

@end
