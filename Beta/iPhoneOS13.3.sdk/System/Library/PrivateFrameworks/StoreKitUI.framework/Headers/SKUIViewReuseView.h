/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, SKUIViewReusePool;

__attribute__((visibility("hidden")))
@interface SKUIViewReuseView : UIView

{
    SKUIViewReusePool *_viewReusePool;
    NSArray *_allExistingViews;
}

@property (nonatomic, readonly) NSArray *allExistingViews;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
