/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/NSTextAttachment.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSObject, NSURL;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SKUIBadgeTextAttachment : NSTextAttachment <Swift>

{
    NSURL *_imageURL;
    NSObject<OS_dispatch_semaphore> *_imageLoadingSemaphore;
}

@property (retain) NSObject<OS_dispatch_semaphore> *imageLoadingSemaphore;
@property (nonatomic, readonly) struct CGSize badgeSize;
@property (nonatomic, readonly) NSURL *imageURL;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewElement:(id)arg1;
- (void)_loadImageWithResourceName:(id)arg1 fallbackImage:(id)arg2 styleColor:(id)arg3;
- (void)_ensureImageIsLoaded;

@end
