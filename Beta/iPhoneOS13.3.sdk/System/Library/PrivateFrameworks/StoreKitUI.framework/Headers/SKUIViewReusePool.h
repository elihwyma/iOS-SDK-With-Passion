/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, UIView;

__attribute__((visibility("hidden")))
@interface SKUIViewReusePool : NSObject

{
    UIView *_parentView;
    NSMutableDictionary *_reuseClasses;
    NSMutableArray *_viewPool;
}

- (id)initWithParentView:(id)arg1;
- (void)recycleReusableViews:(id)arg1;
- (void)hideUnusedViews;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (id)dequeueReusableViewWithReuseIdentifier:(id)arg1;
- (Class)viewClassWithReuseIdentifier:(id)arg1;

@end
