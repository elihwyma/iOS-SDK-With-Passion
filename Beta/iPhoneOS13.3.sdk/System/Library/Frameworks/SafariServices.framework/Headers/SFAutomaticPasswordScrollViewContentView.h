/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@protocol SFAutomaticPasswordScrollViewContentViewLayoutObserver;

__attribute__((visibility("hidden")))
@interface SFAutomaticPasswordScrollViewContentView : UIView

{
    id <SFAutomaticPasswordScrollViewContentViewLayoutObserver> _layoutObserver;
}

@property (weak, nonatomic) id <SFAutomaticPasswordScrollViewContentViewLayoutObserver> layoutObserver;

- (void)layoutSubviews;

@end
