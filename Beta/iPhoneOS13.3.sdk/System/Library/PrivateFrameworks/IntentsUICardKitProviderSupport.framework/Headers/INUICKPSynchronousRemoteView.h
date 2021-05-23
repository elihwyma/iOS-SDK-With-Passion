/*
 Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
 */

#import <UIKit/UIView.h>

@protocol INUICKPSynchronousRemoteViewDelegate;

@interface INUICKPSynchronousRemoteView : UIView

{
    id <INUICKPSynchronousRemoteViewDelegate> _delegate;
}

@property (weak, nonatomic) id <INUICKPSynchronousRemoteViewDelegate> delegate;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
