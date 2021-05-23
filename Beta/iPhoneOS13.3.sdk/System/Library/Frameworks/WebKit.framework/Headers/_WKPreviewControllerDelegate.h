/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _WKPreviewControllerDelegate : NSObject

{
    struct SystemPreviewController *_previewController;
    struct IntRect _linkRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (id)presentingViewController;
- (void)previewControllerDidDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (id)initWithSystemPreviewController:(struct SystemPreviewController *)arg1;

@end
