/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <UIView.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface PGLoadingIndicatorView : UIView

{
    UIActivityIndicatorView *_activityIndicatorView;
}

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
