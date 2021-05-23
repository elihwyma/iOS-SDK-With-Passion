/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface _PHUIViewControllerDefaultTransitionEndPoint : NSObject <Swift>

{
    UIViewController *_viewController;
}

@property (weak, nonatomic, readonly) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool keepsSourceRegionOfInterestContent;

- (id)init;
- (id)initWithViewController:(id)arg1;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2;
- (id)removeBackgroundColorForTransition:(id)arg1;
- (void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2;

@end
