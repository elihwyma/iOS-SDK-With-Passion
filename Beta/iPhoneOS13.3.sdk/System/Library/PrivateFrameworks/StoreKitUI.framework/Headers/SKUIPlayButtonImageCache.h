/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSString, UIImage;

@interface SKUIPlayButtonImageCache : NSObject

{
    struct os_unfair_lock_s _imageLock;
    NSBundle *_bundle;
    NSString *_playImageName;
    UIImage *_playImage;
    NSString *_pauseImageName;
    UIImage *_pauseImage;
    NSString *_stopImageName;
    UIImage *_stopImage;
}

@property (readonly) UIImage *playImage;
@property (readonly) UIImage *pauseImage;
@property (readonly) UIImage *stopImage;

+ (id)imageCacheForStyle:(long long)arg1;

- (id)initWithStyle:(long long)arg1;
- (void)preloadImages;

@end
