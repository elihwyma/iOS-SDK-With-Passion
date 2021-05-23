/*
 Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

#import <UIKit/UIView.h>

@protocol NCSizeObservingViewDelegate;

__attribute__((visibility("hidden")))
@interface NCSizeObservingView : UIView

{
    _Bool _delegateInterestedInSizeChanges;
    id <NCSizeObservingViewDelegate> _delegate;
}

@property (weak, nonatomic) id <NCSizeObservingViewDelegate> delegate;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
