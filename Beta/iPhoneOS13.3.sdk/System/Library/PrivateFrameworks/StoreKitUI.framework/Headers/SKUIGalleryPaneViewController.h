/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class SKUIEmbeddedMediaView, SKUIMediaComponent;

__attribute__((visibility("hidden")))
@interface SKUIGalleryPaneViewController : UIViewController

{
    SKUIMediaComponent *_component;
    long long _galleryIndex;
}

@property (nonatomic, readonly) SKUIMediaComponent *component;
@property (nonatomic, readonly) long long galleryIndex;
@property (nonatomic, readonly) SKUIEmbeddedMediaView *mediaView;

- (id)initWithMediaComponent:(id)arg1 galleryIndex:(long long)arg2;

@end
