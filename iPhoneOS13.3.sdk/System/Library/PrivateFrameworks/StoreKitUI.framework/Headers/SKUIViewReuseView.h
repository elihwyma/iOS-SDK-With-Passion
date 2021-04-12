//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SKUIViewReusePool;

__attribute__((visibility("hidden")))
@interface SKUIViewReuseView : UIView
{
    SKUIViewReusePool *_viewReusePool;
    NSArray *_allExistingViews;
}

@property(readonly, nonatomic) NSArray *allExistingViews; // @synthesize allExistingViews=_allExistingViews;
// - (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)modifyUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

