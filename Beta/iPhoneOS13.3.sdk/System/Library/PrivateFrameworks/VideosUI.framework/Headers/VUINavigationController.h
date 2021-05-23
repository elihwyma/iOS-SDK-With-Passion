/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAppNavigationController.h>

@class NSString, UITapGestureRecognizer, VUIDocumentUIConfiguration;

__attribute__((visibility("hidden")))
@interface VUINavigationController : VUIAppNavigationController

{
    UITapGestureRecognizer *_gesture;
    VUIDocumentUIConfiguration *_configuration;
}

@property (retain, nonatomic) UITapGestureRecognizer *gesture;
@property (retain, nonatomic) VUIDocumentUIConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

@end
