/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKJSITunesStore.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasJSITunesStore : IKJSITunesStore

{
    UIViewController *_formPresentationViewController;
}

@property (weak, nonatomic) UIViewController *formPresentationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2;

@end
