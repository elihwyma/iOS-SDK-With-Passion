/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSItemProvider.h>

@class NSData, NSMutableArray, NSProgress, NSString, NSURL, SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUIArtworkItemProvider : NSItemProvider

{
    NSURL *_url;
    SKUIResourceLoader *_resourceLoader;
    NSProgress *_progress;
    NSData *_imageData;
    NSMutableArray *_completionHandlers;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithURL:(id)arg1 usingResourceLoader:(id)arg2;

@end
