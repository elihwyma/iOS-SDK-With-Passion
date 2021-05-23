/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSArray, OFLRUCache, OKPresentationViewControllerProxy;

@interface OKResourceManager : NSObject

{
    OFLRUCache *_resources;
    OKPresentationViewControllerProxy *_presentationViewController;
    NSArray *_resourceLoaders;
}

- (void)dealloc;
- (id)initWithPresentationViewController:(id)arg1;
- (id)resourceLoaderForURL:(id)arg1;
- (id)resourceWithURL:(id)arg1 copy:(_Bool)arg2;

@end
