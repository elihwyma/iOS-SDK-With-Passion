/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@protocol MCDErrorViewDelegate;

@interface MCDErrorLoadingView : UIView

{
    _Bool _shouldEnableNetwork;
    id <MCDErrorViewDelegate> _delegate;
}

@property (weak, nonatomic) id <MCDErrorViewDelegate> delegate;
@property (nonatomic) _Bool shouldEnableNetwork;

- (id)initWithTitle:(id)arg1 buttonText:(id)arg2;
- (void)retryButtonPressed:(id)arg1;

@end
