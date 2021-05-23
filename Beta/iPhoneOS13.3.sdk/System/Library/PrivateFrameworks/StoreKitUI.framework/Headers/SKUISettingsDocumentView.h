/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@protocol SKUISettingsDocumentViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsDocumentView : UIView

{
    id <SKUISettingsDocumentViewDelegate> _delegate;
}

@property (weak, nonatomic) id <SKUISettingsDocumentViewDelegate> delegate;

- (void)tintColorDidChange;

@end
