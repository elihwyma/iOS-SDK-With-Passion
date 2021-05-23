/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UINavigationController.h>

@class NSString;

@interface ICDocCamExtractedDocumentNavigationController : UINavigationController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)prepareForDismissal;
- (id)initWithDelegate:(id)arg1 documentInfoCollection:(id)arg2 imageCache:(id)arg3 currentIndex:(long long)arg4 mode:(int)arg5;

@end
