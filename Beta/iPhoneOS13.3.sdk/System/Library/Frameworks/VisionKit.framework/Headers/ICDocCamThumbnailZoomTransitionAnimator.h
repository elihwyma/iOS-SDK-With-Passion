/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailZoomTransitionAnimator : NSObject

{
    _Bool _presenting;
    UIImage *_thumbnailImage;
    NSIndexPath *_indexPath;
    double _duration;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) double duration;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) _Bool presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (_Bool)_shouldCrossFadeNavigationBar;
- (id)initWithImage:(id)arg1 indexPath:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;

@end
