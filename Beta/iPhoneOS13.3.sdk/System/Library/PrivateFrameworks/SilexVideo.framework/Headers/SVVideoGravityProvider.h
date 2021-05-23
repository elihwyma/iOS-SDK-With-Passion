/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoPresentationSizeObserving, SVVideoViewControllerSizeObserving;

@interface SVVideoGravityProvider : NSObject

{
    CDUnknownBlockType _changeBlock;
    NSString *_videoGravity;
    NSString *_landscapeVideoGravity;
    NSString *_portraitVideoGravity;
    id <SVVideoPresentationSizeObserving> _presentationSizeObserver;
    id <SVVideoViewControllerSizeObserving> _videoViewControllerSizeObserver;
}

@property (nonatomic, readonly) id <SVVideoPresentationSizeObserving> presentationSizeObserver;
@property (nonatomic, readonly) id <SVVideoViewControllerSizeObserving> videoViewControllerSizeObserver;
@property (copy, nonatomic) NSString *videoGravity;
@property (copy, nonatomic) NSString *portraitVideoGravity;
@property (copy, nonatomic) NSString *landscapeVideoGravity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (id)initWithPresentationSizeObserver:(id)arg1 videoViewControllerSizeObserver:(id)arg2;
- (void)updateVideoGravityWithPresentationSize:(struct CGSize)arg1 videoViewControllerSize:(struct CGSize)arg2;

@end
