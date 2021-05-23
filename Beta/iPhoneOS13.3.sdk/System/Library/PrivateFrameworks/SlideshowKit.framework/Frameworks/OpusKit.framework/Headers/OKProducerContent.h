/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKProducerBundle.h>

@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle

{
    OKProducerPlugin *_plugin;
}

@property (nonatomic) OKProducerPlugin *plugin;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (_Bool)isLoaded;

@end
