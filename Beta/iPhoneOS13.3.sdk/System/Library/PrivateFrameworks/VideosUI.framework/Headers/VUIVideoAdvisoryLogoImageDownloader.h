/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class TVImageProxy;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryLogoImageDownloader : NSObject

{
    TVImageProxy *_ratingImageProxy;
}

@property (retain, nonatomic) TVImageProxy *ratingImageProxy;

- (void)downloadImageWithURL:(id)arg1 imageInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
