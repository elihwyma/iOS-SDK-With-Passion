/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoPresentationSizeObserverFactory, SVVideoViewControllerSizeObserverFactory;

@interface SVVideoGravityProviderFactory : NSObject

{
    id <SVVideoPresentationSizeObserverFactory> _presentationSizeObserverFactory;
    id <SVVideoViewControllerSizeObserverFactory> _videoViewControllerSizeObserverFactory;
}

@property (nonatomic, readonly) id <SVVideoPresentationSizeObserverFactory> presentationSizeObserverFactory;
@property (nonatomic, readonly) id <SVVideoViewControllerSizeObserverFactory> videoViewControllerSizeObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createVideoGravityProviderForVideo:(id)arg1;
- (id)initWithPresentationSizeObserverFactory:(id)arg1 videoViewControllerSizeObserverFactory:(id)arg2;

@end
